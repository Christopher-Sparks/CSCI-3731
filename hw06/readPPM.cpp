#include <stdio.h>
#include "readPPM.h"

unsigned char* readPPM(const char* fileName, int* width, int* height){

  FILE* fp = fopen(fileName, "rb"); //open file
  char magicNum[3];
  fscanf(fp,"%s\n", magicNum);
  int maxPixel = 0; //variable set to be stored
  fscanf(fp, "%d%d%d\n", width, height, &maxPixel); //store attributes of file

  int size = (*width * *height)*3; //number of pixels in the image

  unsigned char* array_pixel = new unsigned char[size]; //create new array to return

  fread(array_pixel, sizeof(unsigned char), size, fp);

  fclose(fp);

  return array_pixel;

}
