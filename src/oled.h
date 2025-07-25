#pragma once
#include <Arduino.h>

// 'In-Out2', 128x64px
const unsigned char epd_bitmap_In_Out2 [] PROGMEM = {
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x83, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x84, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xc7, 0xe4, 0xcf, 0x30, 0xcc, 0x81, 0xff, 0x07, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xab, 0xe4, 0xcf, 0x26, 0x4c, 0xe7, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x6d, 0xe4, 0x4e, 0x66, 0x4c, 0xe7, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x65, 0xe4, 0x8e, 0x66, 0x4c, 0xe7, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x7d, 0xe4, 0xcc, 0xe6, 0x4c, 0xe7, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xbb, 0xe4, 0xcc, 0xe6, 0x4c, 0xe7, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xc7, 0xe4, 0xc9, 0xf0, 0xe1, 0xe7, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x07, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x78, 0x1f, 0x3e, 0x7e, 0x79, 0x98, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x84, 0x19, 0xb3, 0x60, 0xcd, 0xb0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x86, 0x19, 0xb3, 0x60, 0xcd, 0xe0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfd, 0x1f, 0x3e, 0x7c, 0xfd, 0xc0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfe, 0x19, 0xb3, 0x60, 0xcd, 0xe0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfc, 0x19, 0xb3, 0x60, 0xcd, 0xb0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x78, 0x1f, 0x33, 0x7e, 0xcd, 0x98, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x1f, 0xb3, 0x7c, 0x79, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x18, 0x33, 0x66, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x18, 0x3b, 0x66, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x1f, 0x37, 0x7c, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x7c, 0x18, 0x33, 0x66, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x7c, 0x18, 0x33, 0x66, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfe, 0x1f, 0xb3, 0x66, 0x79, 0xf7, 0xc0, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x84, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x83, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8
};
// 'Break2', 128x64px
const unsigned char epd_bitmap_Break2 [] PROGMEM = {
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x83, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x84, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x1b, 0x30, 0xcf, 0x33, 0x7e, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x54, 0x1b, 0x30, 0xd9, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x92, 0x1b, 0xb1, 0x99, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x9a, 0x1b, 0x71, 0x99, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x82, 0x1b, 0x33, 0x19, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x44, 0x1b, 0x33, 0x19, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x1b, 0x36, 0x0f, 0x1e, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x87, 0xe0, 0xc1, 0x81, 0x86, 0x67, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x7b, 0xe6, 0x4c, 0x9f, 0x32, 0x4f, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x79, 0xe6, 0x4c, 0x9f, 0x32, 0x1f, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x02, 0xe0, 0xc1, 0x83, 0x02, 0x3f, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x01, 0xe6, 0x4c, 0x9f, 0x32, 0x1f, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x03, 0xe6, 0x4c, 0x9f, 0x32, 0x4f, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x87, 0xe0, 0xcc, 0x81, 0x32, 0x67, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x1f, 0xb3, 0x7c, 0x79, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x18, 0x33, 0x66, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x18, 0x3b, 0x66, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x1f, 0x37, 0x7c, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x7c, 0x18, 0x33, 0x66, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x7c, 0x18, 0x33, 0x66, 0xcd, 0x86, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfe, 0x1f, 0xb3, 0x66, 0x79, 0xf7, 0xc0, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x84, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x83, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8
};
// 'Enroll2', 128x64px
const unsigned char epd_bitmap_Enroll2 [] PROGMEM = {
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x83, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x84, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x1b, 0x30, 0xcf, 0x33, 0x7e, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x54, 0x1b, 0x30, 0xd9, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x92, 0x1b, 0xb1, 0x99, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x9a, 0x1b, 0x71, 0x99, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x82, 0x1b, 0x33, 0x19, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x44, 0x1b, 0x33, 0x19, 0xb3, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x38, 0x1b, 0x36, 0x0f, 0x1e, 0x18, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x78, 0x1f, 0x3e, 0x7e, 0x79, 0x98, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x84, 0x19, 0xb3, 0x60, 0xcd, 0xb0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x86, 0x19, 0xb3, 0x60, 0xcd, 0xe0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfd, 0x1f, 0x3e, 0x7c, 0xfd, 0xc0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfe, 0x19, 0xb3, 0x60, 0xcd, 0xe0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xfc, 0x19, 0xb3, 0x60, 0xcd, 0xb0, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x78, 0x1f, 0x33, 0x7e, 0xcd, 0x98, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x07, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xc7, 0xe0, 0x4c, 0x83, 0x86, 0x79, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xc7, 0xe7, 0xcc, 0x99, 0x32, 0x79, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xc7, 0xe7, 0xc4, 0x99, 0x32, 0x79, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0xff, 0xe0, 0xc8, 0x83, 0x32, 0x79, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x83, 0xe7, 0xcc, 0x99, 0x32, 0x79, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x83, 0xe7, 0xcc, 0x99, 0x32, 0x79, 0xff, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8b, 0x01, 0xe0, 0x4c, 0x99, 0x86, 0x08, 0x3f, 0x07, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x05, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 
	0x84, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x83, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 3120)
const int epd_bitmap_allArray_LEN = 3;
const unsigned char* epd_bitmap_allArray[3] = {
	epd_bitmap_In_Out2,
    epd_bitmap_Break2,
	epd_bitmap_Enroll2
};
