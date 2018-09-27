#include <stdio.h>
#include "readPPM.h"
#include "writePPM.h"

int main(){
  char fileName[] = "test.ppm";
  char fileNameCopy[] = "copy.ppm";
  int width = 0;
  int height = 0;
  int size = 0;

  //readPPM
  int** array_2D = readPPM(fileName,&width,&height,&size);

  //writePPM
  writePPM(fileNameCopy, width, height, array_2D, size);

  printf("\nCopy made!\n\n");

}
