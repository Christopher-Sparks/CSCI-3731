#include <stdio.h>
#include "file_exists.h"

int main (int argc, char** argv){
    const char fname[] = "file.txt";
    int boolean = file_exists(fname);
    FILE* fp;
    printf("%d\n", boolean);
    
    //if there is no file, make one
    if(!boolean){
        fopen(fname,"w");
        printf("hello\n");
        fprintf(fp,"hi");
        printf("hello\n");
        fclose(fp);
    }
    
    fopen(fname,"r");
    int value = 0;
    while(fscanf(fp,"%d",&value) != EOF){
        printf("%d", value);
    }
    fclose(fp);
    
    printf("%d", value);
}
