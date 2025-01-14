#include "Arduino.h"
#include <Adafruit_GFX.h>

// Draws a RGBA5551 bitmap from bitmap data found in RAM
void drawRGBA5551Bitmap(int x, int y, uint16_t* bitmap, int width, int height, Adafruit_GFX* screen = NULL);
// Draws a RGBA5551 bitmap from bitmap data found in PROGMEM
void drawRGBA5551Bitmap(int x, int y, const uint16_t bitmap[], int width, int height, Adafruit_GFX* screen = NULL);