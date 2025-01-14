# RGBA16 Drawing Tools
Small library to draw RGBA16 (RGBA5551) bitmaps (commonly used in N64 games) using the Adafruit GFX library, and a [LCD Image Converter](https://github.com/riuson/lcd-image-converter) exporter XML

## Why?
The Adafruit GFX library has bitmap drawing functions, but they're expecting RGB565 with a separate bitmask for binary alpha. While this is _okay_, but the RGBA5551 I find is more compact and having all data within a single uint16_t array is more convenient, at the cost of the single extra bit of green color.

# How to install (Arduino IDE)
Download the entire repository and put it in your `libraries` folder. Then, in your code, include it:

```#include <RGBA5551_Tools.h>```

# How to use

### Prepare your bitmap

Use [LCD Image Converter](https://github.com/riuson/lcd-image-converter) with the XML found in ``lcd_image_converter`` and export your bitmap using its settings. Copy the ``short`` array from its output and save it to a variable either to RAM (type ``uint16_t[]``) or PROGMEM (with ``const``).

### Drawing

Use the ``drawRGBA5551Bitmap`` function to draw either from RAM or from PROGMEM. Parameters are as follows, in order:

**x** - X coordinate of the top-left of the bitmap.

**y** - Y coordinate of the top-left of the bitmap.

**bitmap** - The ``uint16_t`` bitmap data to draw.

**width** - Width of the bitmap in pixels.

**height** - Height of the bitmap in pixels.

**screen** - Adafruit_GFX screen that will draw the bitmap.