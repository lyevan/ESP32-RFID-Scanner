#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <MFRC522.h>


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
#define BUTTON_UP    13  // D13
#define BUTTON_DOWN  12  // D12
#define BUTTON_SLEEP 14  // D14

// Buzzer
#define BUZZER_PIN 27

// Light
#define BLUE_LED_PIN 25
#define GREEN_LED_PIN 33
#define RED_LED_PIN 32

// State
bool systemAwake = true;

void beep() {
  digitalWrite(BUZZER_PIN, LOW);
  delay(50);
  digitalWrite(BUZZER_PIN, HIGH);
}

void showMessage(const char* msg) {
  display.clearDisplay();
  display.setCursor(0, 10);
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.print(msg);
  display.display();
}

void change_light() {
  analogWrite(RED_LED_PIN, 255);
  analogWrite(GREEN_LED_PIN, 0);
  analogWrite(BLUE_LED_PIN, 0);
  
  delay(1000);
  
  analogWrite(RED_LED_PIN, 0);
  analogWrite(GREEN_LED_PIN, 255);
  analogWrite(BLUE_LED_PIN, 0);
  
  delay(1000);
  analogWrite(RED_LED_PIN, 0);
  analogWrite(GREEN_LED_PIN, 0);
  analogWrite(BLUE_LED_PIN, 255);
  
  delay(1000);
  }

void setup() {
  Serial.begin(115200);

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
  display.println("System Ready");
  display.display();

  // RFID
  SPI.begin();  // SCK, MISO, MOSI default on ESP32
  mfrc522.PCD_Init();
  Serial.println("RFID ready");
}



void loop() {
change_light();

  if (digitalRead(BUTTON_SLEEP) == LOW) {
    // Enter soft off/sleep mode
    if (systemAwake) {
      Serial.println("Entering sleep mode...");
      display.clearDisplay();
      display.display();
      mfrc522.PCD_StopCrypto1(); // Stop any current RFID communication
      systemAwake = false;
      beep();
    }
  } else {
    if (!systemAwake) {
      // Wake up
      Serial.println("Waking up...");
      display.setCursor(0, 0);
      display.setTextSize(1);
      display.print("Waking up...");
      display.display();
      mfrc522.PCD_Init(); // Re-init RFID
      systemAwake = true;
      beep();
      delay(500);
    }

    if (digitalRead(BUTTON_UP) == LOW) {
      showMessage("UP");
      Serial.println("Button UP");
      beep();
      delay(300);
    }

    if (digitalRead(BUTTON_DOWN) == LOW) {
      showMessage("DOWN");
      Serial.println("Button DOWN");
      beep();
      delay(300);
    }

    // RFID Scan (only if awake)
    if (systemAwake && mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
      Serial.print("Card UID: ");
      for (byte i = 0; i < mfrc522.uid.size; i++) {
        Serial.print(mfrc522.uid.uidByte[i], HEX);
        Serial.print(" ");
      }
      Serial.println();
      beep();
      mfrc522.PICC_HaltA();
      mfrc522.PCD_StopCrypto1();
    }
  }

  delay(100);
}


