#include <stdio.h>

int main (int argc, char** argv){
    
    
    int value = 0;
    FILE* fp1 = fopen("file.txt","r");
    while(fscanf(fp1,"%d",&value) != EOF);
    fclose(fp1);
    value+=1;
    
    printf("%d\n", value);
    
    FILE* fp2 = fopen("file.txt", "w");
    fprintf(fp2, "%d", value);
    fclose(fp2);
}
