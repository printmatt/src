#include <stdio.h>

int main() {
    int c[] = {3,11,4,1,5,7};

    printf("%s%13s%17s\n","Element","value","Histogram");
    for(size_t i =0;i<5;i++){
        printf("%7u%13d%8s",i,c[i],"");
        for(int j =1; j <= c[i]; j++){
            printf("%s",".");
        }
        puts("");
    }
}