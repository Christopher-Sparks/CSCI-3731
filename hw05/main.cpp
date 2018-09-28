#include <stdio.h>
#include "readPPM.h"
#include "writePPM.h"

int main(){
  char fileName[] = "test.ppm";
  char fileNameCopy[] = "copy.ppm";
  int width = 0;
  int height = 0;

  //readPPM
  int** array_2D = readPPM(fileName,&width,&height);

  //writePPM
  writePPM(fileNameCopy, width, height, array_2D);

  printf("\nCopy made!\n\n");

}
