#ifndef WRITEPPM_H
#define WRITEPPM_H

void writePPM (const char* fileNameCopy, char* magicNum, const int width,
  const int height, const int maxPixel, const unsigned char* pixelCopy, const int size);

#endif
