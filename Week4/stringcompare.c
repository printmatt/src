#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void){
    char strA[SIZE] = "Apples";
    char strB[SIZE] = "Oranges";

    printf("%s and %s are%sthe same.\n",strA,strB,
    strncmp(strA,strB,SIZE) == 0 ? " " : " not ");
    return 0;
}