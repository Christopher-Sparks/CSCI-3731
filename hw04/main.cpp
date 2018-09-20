#include <stdio.h>
#include "readPPM.h"
#include "writePPM.h"

int main(){
  char fileName[10] = "test.ppm";
  char fileNameCopy[10] = "copy.ppm";
  char magicNum [10];
  int width = 0;
  int height = 0;
  int maxPixel = 0;
  int size= 0;

  //readPPM
  unsigned char* pixelCopy = readPPM(fileName, magicNum, &width,&height,&maxPixel,&size);

  //writePPM
  writePPM(fileNameCopy, magicNum, width, height, maxPixel, pixelCopy, size);

  printf("\nCopy made!\n\n");

}
