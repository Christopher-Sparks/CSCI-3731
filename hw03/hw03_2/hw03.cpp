#include <stdio.h>
#include "swap.h"

int main (int argc, char** argv){
    int a,b;
    printf("Enter value for A:\n");
    scanf("%d", &a);
    printf("Enter value for B:\n");
    scanf("%d", &b);
    
    swap(&a, &b);
    
    printf("New value for A: %d\n", a);
    printf("New value for B: %d\n", b);
}
