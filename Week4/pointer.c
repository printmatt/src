#include <stdio.h>
int main() {
int a = 7 ;
int *aPtr; // Un-initialized Pointer
aPtr = &a; // Stores address of a in ptr
printf("a = %d\naPtr = %p\n", a, aPtr);
}