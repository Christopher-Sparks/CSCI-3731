#include <stdio.h>
#include "readPPM.h"
#include "writeJPEG.h"

int main(){
  char ppmName[] = "test.ppm";
  char jpegName[] = "test.jpeg";
  int width = 0;
  int height = 0;

  //readPPM
  unsigned char* array_pixel = readPPM(ppmName,&width,&height);

  //writeJPEG
  writeJPEG(jpegName, width, height, array_pixel);

  printf("\nJPEG made!\n\n");

}
