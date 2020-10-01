#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void){
    char buf[SIZE];
    float temp;
    char unit;

    setbuf(stdout,NULL);
    
    while(strncmp(buf,"quit",4)!=0){
        printf("Enter 'quit' to stop, or enter a new temperature(e.g. 65F):");
        scanf("%s",buf);

        if(sscanf(buf,"%f%c",&temp,&unit) == 2)
        {
            printf("temperature: %0.2f %c\n",temp,unit);
        }
        else if (strncmp(buf,"quit",4)!=0)
        {
            printf("Invalid input.\n");
        }
    }
    printf("Good bye.\n");
    return 0;
}