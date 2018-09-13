#include "file_exists.h"
#include <stdio.h>

int file_exists(const char fname[]){
    FILE* file;
    if(file == fopen(fname,"r")){
        fclose(file);
        return 1;
    }
    return 0;
}

