#include <Wire.h>
#include <SPI.h>
#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <MFRC522.h>
#include <WiFi.h>
#include <Fonts/TomThumb.h>
#include <oled.h>
#include <time.h>  // Add this for NTP

#define WIFI_SSID "Sam_L_2.4Ghz"
#define WIFI_PASSWORD "STYLUSONE1975"

// OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// MFRC522
#define RST_PIN 4
#define SS_PIN 5
MFRC522 mfrc522(SS_PIN, RST_PIN);

// Buttons
#define BUTTON_UP    12  // D12
#define BUTTON_DOWN  13  // D13
#define BUTTON_SLEEP 14  // D14

// Buzzer
#define BUZZER_PIN 27

// Light
#define BLUE_LED_PIN 25
#define GREEN_LED_PIN 33
#define RED_LED_PIN 32

// State
bool systemAwake = true;
int wifiConnectionState = 0; // 2 = connected, 1 = connecting, 0 = disconnected
int scanMode = 0;

// Current Time
String currentTime = "00:00";
String currentDate = "01/01/1970";

// Time update variables
unsigned long lastTimeUpdate = 0;
const unsigned long TIME_UPDATE_INTERVAL = 1000; // Update display every second
unsigned long lastButtonPress = 0;
const unsigned long BUTTON_DEBOUNCE_DELAY = 200;

// NTP Configuration
const char* ntpServer = "pool.ntp.org";
const long gmtOffset_sec = 8 * 3600; // UTC+8 for Philippines
const int daylightOffset_sec = 0;

void beep() {
  digitalWrite(BUZZER_PIN, LOW);
  delay(50);
  digitalWrite(BUZZER_PIN, HIGH);
}

void doubleBeep() {
  beep();
  delay(20);
  beep();
}

void useRGB(int r, int g, int b) {
  if (r < 0) r=0;
  if (g < 0) g=0;
  if (b < 0) b=0;

  if (r > 255) r=255;
  if (g > 255) g=255;
  if (b > 255) b=255;

  analogWrite(RED_LED_PIN, r);
  analogWrite(GREEN_LED_PIN, g);
  analogWrite(BLUE_LED_PIN, b);
}

void setupWiFi() {
  useRGB(255, 0, 0); // Start with red light
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  int retryCount = 0;
  while (WiFi.status() != WL_CONNECTED && retryCount < 20) {
    delay(500);
    useRGB(255, 255, 0);
    wifiConnectionState = 1; // Connecting
    Serial.print(".");
    retryCount++;
  }
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi connection failed!");
    useRGB(255, 0, 0);
    wifiConnectionState = 0; // Disconnected
  } else {
    useRGB(0, 255, 0); // Green light when connected
    wifiConnectionState = 2; // Connected
    Serial.println("Connected to WiFi");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
  }
}

void updateTimeFromNTP() {
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)) {
    Serial.println("Failed to obtain time from NTP");
    useRGB(255, 255, 0); // Red light on failure
    return;
  }
  
  // Format time as HH:MM
  char timeStr[6];
  strftime(timeStr, sizeof(timeStr), "%H:%M", &timeinfo);
  currentTime = String(timeStr);
  
  // Format date as MM/DD/YYYY
  char dateStr[11];
  strftime(dateStr, sizeof(dateStr), "%m/%d/%Y", &timeinfo);
  currentDate = String(dateStr);
  
  Serial.println("Time updated: " + currentTime + " " + currentDate);
}

void initializeNTP() {
  Serial.println("Initializing NTP...");
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  
  // Wait for time to be set
  int retries = 0;
  while (!time(nullptr) && retries < 10) {
    Serial.print(".");
    delay(1000);
    retries++;
  }
  
  if (time(nullptr)) {
    Serial.println("\nNTP time synchronized!");
    updateTimeFromNTP(); // Get initial time
  } else {
    Serial.println("\nNTP synchronization failed");
  }
}

void handleRFID() {
  // RFID Scan
  if (systemAwake && mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    Serial.print("Card UID: ");
    for (byte i = 0; i < mfrc522.uid.size; i++) {
      Serial.print(mfrc522.uid.uidByte[i], HEX);
      Serial.print(" ");
    }
    Serial.println();
    mfrc522.PICC_HaltA();
    mfrc522.PCD_StopCrypto1();
    doubleBeep(); // Beep on successful scan
    delay(1000);
  }
}

void handleButtons() {
  unsigned long currentMillis = millis();
  
  // Only check buttons if enough time has passed since last press
  if (currentMillis - lastButtonPress > BUTTON_DEBOUNCE_DELAY) {
    
    if (digitalRead(BUTTON_SLEEP) == LOW) {
      beep();
      lastButtonPress = currentMillis;
      systemAwake = !systemAwake; // Toggle system awake state
      Serial.println(systemAwake ? "System awake" : "System sleeping");
    } 

    if (digitalRead(BUTTON_UP) == LOW) {
      beep();
      scanMode++;
      if (scanMode >= epd_bitmap_allArray_LEN) {
        scanMode = 0;
      }
      lastButtonPress = currentMillis;
      Serial.println("Scan mode: " + String(scanMode));
    }

    if (digitalRead(BUTTON_DOWN) == LOW) {
      beep();
      scanMode--;
      if (scanMode < 0) {
        scanMode = epd_bitmap_allArray_LEN - 1;
      }
      lastButtonPress = currentMillis;
      Serial.println("Scan mode: " + String(scanMode));
    }
  }
}

void setup() {
  Serial.begin(115200);

  setupWiFi();
  
  // Buzzer
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, HIGH);

  // Buttons with internal pull-ups
  pinMode(BUTTON_UP, INPUT_PULLUP);
  pinMode(BUTTON_DOWN, INPUT_PULLUP);
  pinMode(BUTTON_SLEEP, INPUT_PULLUP);

  // Light Pinmodes
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);

  // OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while (true);
  }
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.drawBitmap(0, 0, epd_bitmap_allArray[0], 128, 64, SSD1306_WHITE);
  display.display();

  // RFID
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("RFID ready");

  // Initialize NTP if WiFi is connected
  if (WiFi.status() == WL_CONNECTED) {
    initializeNTP();
    useRGB(0, 255, 0);
  } else {
    useRGB(255, 0, 0);
  }
}

void loop() {
  unsigned long currentMillis = millis();

  // Handle buttons first (most responsive)
  handleButtons();
  
  // Handle RFID
  handleRFID();
  
  // Update time display every second (no network calls needed!)
  if (currentMillis - lastTimeUpdate >= TIME_UPDATE_INTERVAL) {
    updateTimeFromNTP();
    lastTimeUpdate = currentMillis;
  }

  // Update display less frequently to improve responsiveness
  static unsigned long lastDisplayUpdate = 0;
  if (currentMillis - lastDisplayUpdate >= 100) { // Update display every 100ms
    display.clearDisplay();
    display.setTextColor(SSD1306_WHITE);
    display.setFont(&TomThumb);
    display.setCursor(0, 0);
    display.drawBitmap(0, 0, epd_bitmap_allArray[scanMode], 128, 64, SSD1306_WHITE);

    display.setTextSize(2);
    display.setCursor(9, 27);
    display.print(currentTime);

    display.setTextSize(1);
    display.setCursor(7, 38);
    display.print(currentDate);
    display.display();
    
    lastDisplayUpdate = currentMillis;
  }

  // Set LED color based on WiFi status (less frequently)
  static unsigned long lastLEDUpdate = 0;
  if (currentMillis - lastLEDUpdate >= 1000) { // Update LED every second
    if (WiFi.status() == WL_CONNECTED) {
      useRGB(0, 255, 0);
    } else {
      useRGB(255, 0, 0);
    }
    lastLEDUpdate = currentMillis;
  }

  // Very short delay to prevent watchdog issues
  delay(10);
}


