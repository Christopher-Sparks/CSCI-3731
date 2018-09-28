#include <stdio.h>
#include "readPPM.h"

int** readPPM(const char* fileName, int* width, int* height){

  FILE* fp = fopen(fileName, "rb"); //open file
  char magicNum[3];
  fscanf(fp,"%s\n", magicNum);
  int maxPixel = 0; //variable set to be stored
  fscanf(fp, "%d%d%d\n", width, height, &maxPixel); //store attributes of file

  int size = (*width * *height)*3; //number of pixels in the image

  unsigned char* array_pixel = new unsigned char[size]; //create new array to return

  fread(array_pixel, sizeof(unsigned char), size, fp);

  fclose(fp);

  unsigned char* ff = (unsigned char*)(&maxPixel); //storing ff with *ff

  //Numerical Recipes Trick
  int** array_2D = new int* [*height]; //allocate array of pointers
  *array_2D = new int[*width* *height]; //allocate flat array
  for(int i = 1; i < *height; ++i){
    array_2D[i] = array_2D[i-1]+ *width; //set pointers to start of each row
  }

  int counter = 0; //used to jump between indexes of array_pixel

  //loops that convert the array_pixel into a 2D array
  for(int i=0; i < *height; ++i){
    for(int j=0; j < *width; ++j){
        unsigned char* bytes = (unsigned char*)(&array_2D[i][j]);
        bytes[0] = *ff; //sets bit 1 to 255 ff[0]
        bytes[1] = array_pixel[counter];
        bytes[2] = array_pixel[counter+1];
        bytes[3] = array_pixel[counter+2];
        counter += 3;
    }
  }

  return array_2D;

}
