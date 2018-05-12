#ifndef NOLA_H
#define NOLA_H

#define VERSION "0.2"

//SSD1306 display(0x3c, D2, D1);
#define OLED_RESET 2
Adafruit_SSD1306 display(OLED_RESET);

//#if (SSD1306_LCDHEIGHT != 64)
//#error("Height incorrect, please fix Adafruit_SSD1306.h!");
//#endif
//#define SSD1306_LCDHEIGHT = 64

// Define which pins to use.
const uint8_t dataPin  = D6;
const uint8_t clockPin = D5;

// Set the number of LEDs to control.
const uint16_t ledCount = 8;

// Set the brightness to use (the maximum is 31).
const uint8_t brightness = 1;
const uint16_t minPower = 1;
const uint16_t maxPower = 255 * 31;
const float multiplier = pow(maxPower / minPower, 1.0 / (ledCount - 1));

#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16 
// character dimensions (for aligning text)
#define CH_WID 6
#define CH_HEI 8
// display dimensions (for aligning text)
#define DP_WID 128
#define DP_HEI 64
#define DP_WID_MID 64
#define DP_HEI_MID 32

int switchPin1 = D3;        // UP      
int switchPin2 = D4;        // DOWN
int switchPin3 = D7;        // BACK
int switchPin4 = D10;       // ENTER

// nola logo
const unsigned char PROGMEM fdl_bmp1 [] = {
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x27, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x53, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xa5, 0xc1, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xfb, 0xef, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xfc, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x3b, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xfd, 0x3e, 0xe0, 0xef, 0xf3, 0xfe, 0x00, 0x4a, 0x7f, 0xe7, 0xfe, 0x0c, 0xfb, 0xff, 0xf0, 
  0x0f, 0xfd, 0x8e, 0xdf, 0x6f, 0xf3, 0xfe, 0x41, 0x00, 0x7f, 0xef, 0xfd, 0xf6, 0x7b, 0xff, 0xf0, 
  0x0f, 0xfd, 0xe6, 0x9f, 0x6f, 0xe9, 0xfc, 0x85, 0x86, 0x7f, 0xe7, 0xfb, 0xf6, 0xbf, 0xff, 0xf0, 
  0x0f, 0xfd, 0xf2, 0x9f, 0x6f, 0xdd, 0xfc, 0x84, 0x10, 0x3f, 0xe7, 0xfb, 0xf6, 0xcb, 0xff, 0xf0, 
  0x0f, 0xfd, 0xf8, 0xbf, 0x6f, 0xc0, 0xfc, 0x82, 0x5e, 0x1f, 0xe7, 0xfb, 0xf6, 0xe3, 0xff, 0xf0, 
  0x0f, 0xfd, 0xfc, 0x9f, 0x6f, 0xbe, 0xfb, 0xdf, 0x71, 0xdf, 0xf0, 0xcd, 0xee, 0xf3, 0xff, 0xf0, 
  0x0f, 0xfc, 0xff, 0xc1, 0xe1, 0xbe, 0x7d, 0x00, 0x00, 0x1f, 0xf8, 0x1e, 0x1e, 0xfb, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xd3, 0x83, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x00, 0x10, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x49, 0x6a, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x21, 0xb4, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xf0, 0x8f, 0xfd, 0xca, 0x00, 0xbf, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xca, 0x5a, 0x7e, 0x01, 0x0c, 0xff, 0x0a, 0x37, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0x80, 0x21, 0x9f, 0x42, 0x00, 0xfa, 0x10, 0x91, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xfb, 0x0c, 0x9f, 0x9c, 0x6a, 0xfc, 0x62, 0x04, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xfc, 0x00, 0x40, 0x03, 0x80, 0x01, 0xe4, 0x00, 0x20, 0x7f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xfe, 0x11, 0xce, 0x31, 0x96, 0x21, 0xc4, 0x70, 0xcc, 0x3f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xfc, 0x6b, 0x40, 0x0a, 0xc1, 0x83, 0x55, 0x22, 0x81, 0x3f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xf8, 0x01, 0x00, 0x00, 0x40, 0x0e, 0x08, 0x04, 0x40, 0x1f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xf5, 0x3e, 0x47, 0xa0, 0x70, 0x3e, 0x86, 0x28, 0x87, 0x3f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xf0, 0x08, 0x80, 0x20, 0xa8, 0x04, 0xc6, 0x00, 0x01, 0x8f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xbb, 0xc8, 0x1a, 0x46, 0x1a, 0xa6, 0x50, 0x87, 0x4f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xfe, 0x7b, 0xff, 0xba, 0xdd, 0x59, 0xcd, 0xfe, 0x87, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xf8, 0x02, 0xff, 0xe4, 0x00, 0x00, 0x1f, 0xff, 0xc2, 0x1f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xb9, 0xff, 0xf8, 0x48, 0x18, 0x3f, 0xff, 0xc7, 0xdf, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xfc, 0x03, 0xff, 0xfe, 0x08, 0x20, 0x3f, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xfe, 0x48, 0x0a, 0x7f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0x5b, 0xff, 0xff, 0xc8, 0xf5, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0x00, 0x61, 0xff, 0xff, 0xcd, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xf3, 0xff, 0x39, 0x00, 0x4a, 0x1d, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x74, 0x08, 0x00, 0x0c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xef, 0x7b, 0x41, 0x01, 0xbf, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0x84, 0x21, 0xfe, 0x07, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xc6, 0x7f, 0x94, 0x31, 0xfe, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xa4, 0x2a, 0xff, 0x0b, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xd1, 0x1c, 0x48, 0x10, 0x38, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xd4, 0x62, 0x8d, 0x3c, 0xa7, 0x37, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x10, 0x10, 0x08, 0x20, 0x67, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x21, 0x36, 0x48, 0x07, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x79, 0xe9, 0xee, 0x4e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x05, 0xe0, 0x07, 0x82, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x97, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 0x11, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0
};

const unsigned char deadlocks [] PROGMEM = {
  // 'deadface, 128x64px
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x10, 0x80, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xc1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x23, 0xe3, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf7, 0xf8, 0x00, 0x00, 0x00, 0x20, 0xe2, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x4f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x70, 0xf2, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x5f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xfd, 0xfa, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x9f, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xff, 0xfd, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x8f, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xff, 0xfd, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x87, 0xff, 0xf0, 0x00, 0x00, 0x01, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x03, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x0f, 0xff, 0xfe, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x1f, 0xff, 0xfc, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0xfd, 0xf0, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x07, 0xfb, 0xf0, 0x00, 0x00, 0x00, 0x78, 0xe0, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x03, 0xf1, 0xe0, 0x00, 0x00, 0x00, 0x30, 0x40, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x01, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x10, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xc0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xff, 0xc0, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x7f, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x3c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


// Here we implement our custom ButtonThread, that Inherits from Thread
class ButtonThread: public Thread{
public:
  // Our custom thread attributes
  int pin;
  long duration;
  long _lastButtonPushed;

  /*
    Our Constructor. This will initialize the thread
    with it's corresponding pin and duration after clicked.
  */
  ButtonThread(int _pin, long _duration): Thread(){
    // Set our attributes on construct
    pin = _pin;
    duration = _duration;
    _lastButtonPushed = 0;

    // Thread will start disabled
    enabled = false;

    // Configure the pin as INPUT and enable pull-up
    pinMode(pin, INPUT);
    digitalWrite(pin, HIGH);
  }

  /*
    Override the method responsible for
    checking if the thread should run.
    It will first check if the button is pressed.
    If so, we enable the thread, and then let the
    "Old" default Thread method 'shouldRun' return if
    it should run.
  */
  bool shouldRun(long time){
    // Override enabled on thread when pin goes LOW.
    if(digitalRead(pin) == LOW){
      enabled = true;
      /*
        Here, we save the current time in this object,
        to compare it later.
        the 'time' parameter in this method, is an override for the
        'millis()' method. It allows who is checking the thread, to
        pass a custom time.
        This is sintax for writing an 'inline' if is very usefull, 
        it's the same as:
          if(time > 0){
            _lastButtonPushed = time;
          }else{
            _lastButtonPushed = millis();
          }
      */
      _lastButtonPushed = (time ? time : millis());
    }

    // Let default method check for it.
    return Thread::shouldRun(time);
  }

  /*
    We 'disable' the thread after the duration on the
    'run' method.
    What we should do here, is check if the time saved
    in the _lastButtonPushed variable plus the duration,
    is greater than our current time. If that's true, it
    means we exceeded the thread time, and that we must
    disable it and prevent from running.
  */
  void run(){
    // Check if time elapsed since last button push
    if(millis() > _lastButtonPushed + duration){
      // It exceeded time. We should disable it.
      enabled = false;
    }

    /*
      Run the thread.
      Note that this method will only get called
      from the ThreadList, IF the 'shouldRun' returns true.
      If the thread is not enabled anymore, it will run a 'last'
      time with the flag 'enabled' as false, meaning it's the last
      run in the period. You can use it for doing something only
      before it stops running.
    */
    Thread::run();
  }
};

#endif // NOLA_H


/*


      `..                             .-:/+ooossooooooosssso+/:+hMMMMMMMMMMMMMMMMh+////mMMMMMMMMMMMs/
  `...`                        .:+sss+/-.`                `.:/oshhdmmmMMMMMMMMMMMNds///mMMMMMMMMMMMs
``...                      -+ss+:.                                .:+symMMMMMMMMMMMMMh+/ohNMMMMMMMMM
....                   ./ss/.                                          ./ymNMMMMMMMMMMMho/+hMMMMMMMM
..`                 `/so:`                                                 -omMMMMMMMMMMMms/oNMMMMMM
.`                :ss:                                                        -smNMMMMMMMMMh/oNMMMMM
`               /y+`                                                            `/dNMMMMMMm+//+MMMMM
              /y/                                                                  :hy++o+/////sNMMM
            -y/                                                                      /hs////////yMMM
          `so`                                                                        `od+///////dMM
         -y:                                                                            -ds//////hMM
        +y.   `/`          :y:                                                           `yh//////dM
       os`  `+ddd+.      :dNMMd:                                                           sh/////yM
      ss   /hdddddds-  -hNNNNMMMd/                                         `o:       .ss.   oh////yM
     +y  :hdddddddddmysmNNNNNMMMMMm/`                                    `oNMMd/   `sMMMMy.  sy--:oM
    -h`.hmmmdddddddmmmmmNNNNNMMMMMMMy`                                  /NMMMMMMm+oNMMMMMMMh-`h+..` 
   `h:  :hmmmmddddmmmmmNNNNNNMMMMMd:                                  -dMMMMMMMMMMMMMMMMMMMMMo-d/:/s
   +y     :ymmmmmmmmmmNNNNNNMMMMd:                                     /dMMMMMMMMMMMMMNNNNNh:  oh/oN
  `h:       -ymmmmmmNNNNNNNMMMMs                                         :hMMMMMMMNNNNNNNd:    .mosN
  -h        /mNNNNNNNNNNNNMMMMMMd:                                        :mMMMMNNNNNNNmmh:     yy: 
  os      /mNNNNNNNNNNNMMMMMMMMMMMm/                                    :dMMMMMNNNNNmmmmmmmh/`  +m+ 
  s+    /mMMMMMNNMMMMMMMMMMMMMMMMMMm:                                 `hMMMMMMNNNNNmmmmdddddy-  :m+ 
  y/    /dMMMMMMMMMMMMNMMMMMMMMMMNo                                    .yNMMMMNNNmohmmddddy-    -m+ 
  y+      :hMMMMMMMMMy..sNMMMMMMs`                                       `oNMMNNs.  :yddh/      -m- 
  so        -hMMMMMh.    `sNMMh.                                           `oms.      ./`       /d  
  /h          -yMh-        `+:                                                                  ss  
s+:d.           `                                                                              `dd  
MMMyo                                                                                          +md  
MMMyd.                                                                                        `dd.  
MMMMdy                                                       `.-:/+osyhds.                    sm.   
MMMMNh+                                         `.-:/+osydmNmdhyso+/:++os:                   +N:    
MMMMMdd/                            `-:/+osyhdmmmdhys+/:-.`                                 -m/     
MMMMMMmd/                 `.:+oyhdNMMMMMM+:-.`                                             -h+      
MMMMMMMdh+             /dNMMMMMMMMMMMMMMM:                                                :h-       
MMMMMMMMdhs`           /:NMMMMMMMMMMMMMMMo                                               +h.        
MMMMMMMMMMhh:            dMMMMMMMMMMMMMMMh                                             .ys`   .++:  
MMMMMMMMMMMmds`          oMMMMMMMMMMMMMMMm                                           `+d/     -.    
NysmddMMMy+/smmo`        +MMMMMMMMMMMMMMMM                                          /h+`            
.     .y.     :/ho.      `NMMMMMMMMMMMMMMN                                       `/h+               
          :/     :yy:     /NMMMMMMMMMMMMm:                                     -od+`                
 `ydo```/dMMho.   yMmho-   .sdNNNNNNNho-                                    .+hy/`                  
`yMMMMMMMMMMMMMy+oNMMNmdho:`                                            `-ohy/`                     
MMMMMMMMMMMMMMMMMMMMMMMMNhhhyo/.                                    `:ohho:`                        
MMMMMMMMMMMMMMMMMMMMMMMMMMMNdshdhyo/-.                        `-/oyhs+:`                            
MMMMMMMMMMMMMMMMMMMMMMMMMMmm-   ` .:+osyyyo++/:::---:://+ossyyso/-`                                 
++++++++++++++++++++++++:                 `..-:/:///:::--`                                          
 
 
 */