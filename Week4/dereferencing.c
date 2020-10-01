#include <stdio.h>
int main() {
    int a = 7, b ;
    int *aPtr; // Un-initialized Pointer
    aPtr = &a; // Stores address of a in ptr
    a=8;
    b = *aPtr; // Put Value at ptr in b
    printf("a = %d\naPtr = %p\n*aPtr = %p\n ", a, aPtr, b);
}