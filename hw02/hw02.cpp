#include <stdio.h>
#include "bubble_sort.h"

int main (int argc, char** argv){
    int array[] = {3, 4, 8, 1, 2, 9, 5, 7, 0};
    int array_size = sizeof(array)/sizeof(int);
    //array_size needs division since sizeof method returns amount of bytes
    //dividing by size of bytes will give me the array length
    
    printf("Array before: ");
    for (int i = 0; i < array_size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    
    bubble_sort(array, array_size);
    
    printf("Array after: ");
    for (int i = 0; i < array_size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
