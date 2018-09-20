#include <stdio.h>
#include "writePPM.h"

void writePPM (const char* fileNameCopy, char* magicNum, const int width,
  const int height, const int maxPixel, const unsigned char* pixelCopy, const int size){

  FILE* fp = fopen(fileNameCopy,"wb");
  fprintf(fp, "%s\n%d %d\n%d\n", magicNum, width, height, maxPixel); //adds header info

  fwrite(pixelCopy, sizeof(unsigned char), size, fp); //adds binary info

  fclose(fp);
}
