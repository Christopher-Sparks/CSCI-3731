#include <stdio.h>
#include "writePPM.h"

void writePPM (const char* fileNameCopy, const int width, const int height, int** array_2D){

  FILE* fp = fopen(fileNameCopy,"wb");
  char magicNumber[] = "P6";
  int maxPixel = 255;
  fprintf(fp, "%s\n%d %d\n%d\n", magicNumber, width, height, maxPixel); //adds header info

  int size = (width * height)*3; //number of pixels in the image

  unsigned char* array_pixel = new unsigned char[size];

  int counter=0; // used to keep track of index of flat array

  //converting 2D array back into flat array to be used with fwrite
  for(int i=0; i<height; ++i){
    for(int j=0; j<width; ++j){
      unsigned char* bytes = (unsigned char*)(&array_2D[i][j]);
      array_pixel[counter] = bytes[1];
      array_pixel[counter+1] = bytes[2];
      array_pixel[counter+2] = bytes[3];
      counter += 3;
    }
  }

  fwrite(array_pixel, sizeof(unsigned char), size, fp); //adds binary info

  fclose(fp);
}
