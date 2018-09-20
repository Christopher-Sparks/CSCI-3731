#include <stdio.h>
#include "readPPM.h"

unsigned char* readPPM(const char* fileName, char* magicNum, int* width, int* height, int* maxPixel, int* size){
  FILE* fp = fopen(fileName, "rb");

  fscanf(fp, "%s%d%d%d\n", magicNum, width, height, maxPixel); //store attributes of file

  /* test prints for values
  printf("magicNum = %s\n", magicNum);
  printf("width = %d\n", *width);
  printf("height = %d\n", *height);
  printf("maxPixel = %d\n", *maxPixel);
  */

  *size = (*width * *height)*3; //number of pixels in the image
  //printf("size = %d\n", *size);

  unsigned char* pixelArray = new unsigned char[*size]; //create new array to return

  fread(pixelArray, sizeof(unsigned char), *size, fp);

  fclose(fp);
  return pixelArray;

}
