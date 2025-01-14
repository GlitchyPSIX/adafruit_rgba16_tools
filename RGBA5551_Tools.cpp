void drawRGBA5551Bitmap(int x, int y, const uint16_t bitmap[], int width, int height, Adafruit_GFX* screen = NULL){
  for(int dY = 0; dY < height; dY++){
    for(int dX = 0; dX < width; dX++){
      int location = (width*dY) + dX;

      uint16_t currPixel = pgm_read_word(&bitmap[location]);

      if ((currPixel&1) == 0) continue;

      uint16_t blue = (currPixel >> 1) & 0x3E;
      uint16_t nCurrPixel = (currPixel & 0xFFC0) | blue;
      if (screen != NULL){
        screen->drawPixel(x+dX, y+dY, nCurrPixel);
      }
    }
  }
}

void drawRGBA5551Bitmap(int x, int y, uint16_t *bitmap, int width, int height, Adafruit_GFX* screen = NULL){
  for(int dY = 0; dY < height; dY++){
    for(int dX = 0; dX < width; dX++){
      int location = (width*dY) + dX;
      uint16_t currPixel = bitmap[location];

      if ((currPixel&1) == 0) continue;

      uint16_t blue = (currPixel >> 1) & 0x3E;
      uint16_t nCurrPixel = (currPixel & 0xFFC0) | blue;
      if (screen != NULL){
        screen->drawPixel(x+dX, y+dY, nCurrPixel);
      }
    }
  }
}