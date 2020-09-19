#include "bubbleSort.h"
void bubblesort(int a[], int size)
{
    for(unsigned int k = 1; k<size; k++){
        for(int i = 0; i<size-1; i++){
           
            if(a[i]>a[i+1]) {
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;  
            }
            
        }
    }
    
}