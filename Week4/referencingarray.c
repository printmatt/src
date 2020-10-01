#include <stdio.h>
float avg(int *myArray, int arraySize, float *avg)
{
    *avg = 0.0;
    for(int i = 0; i < arraySize; i++){
        *avg += myArray[i];
    }
    return *avg/arraySize;
}

int main(void)
{
    int values[] = {3, 1, 4, 5, 9, 2, 6 };
    float average = 0.0;
    printf("The average values is: %0.73f\n",
    avg(values, sizeof(values)/sizeof(int), &average));
    return 0;
}