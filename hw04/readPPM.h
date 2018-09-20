#ifndef READPPM_H
#define READPPM_H

unsigned char* readPPM(const char* fileName, char* magicNum, int* width, int* height, int* maxPixel, int* size);

#endif
