#include <stdio.h>
#include "bubbleSort.h"
#define SIZE 8

int main(){
    int c[] = {3,11,4,1,5,7,2,1};
    printf("Data items in original order\n");

    //output original array
    for (size_t i = 0; i< SIZE; i++){
        printf("%4d",c[i]);
    }
    bubblesort(c,SIZE);
    printf("\nData items in ascending order\n");

    //output original array
    for (int i = 0; i< SIZE; i++){
        printf("%4d",c[i]);
    }
}
