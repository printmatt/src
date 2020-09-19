#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    float userTemp;
    char userScale,outputScale1,outputScale2;
    char inputScale[10]="";
    float outputTemp1,outputTemp2;

    //Ask for input
    printf("Enter input temperature: ");
    //Receive input and store into the 2 variables
    scanf("%f %c",&userTemp,&userScale);
    userScale = tolower(userScale);
    //Announce invalid input and return -1 if scale is not C,F, or K
    if(userScale != 'c' && userScale != 'k' && userScale != 'f'){
        printf("Invalid temperature scale");
        return -1;
    }

    
    
    //switch to determine output
    switch(userScale)
        case 'c':{
            strcat(inputScale,"Celsius");
            outputTemp1 = 32.0+(userTemp*1.8);
            outputTemp2 = userTemp+273.15;
            outputScale1 = 'F';
            outputScale2 = 'K';
            break;
        

        case 'f':
            strcat(inputScale,"Fahrenheit");
            outputTemp1 = (userTemp - 32) /1.8;
            outputTemp2 = outputTemp1 + 273.15;
            outputScale1 = 'C';
            outputScale2 = 'K';
            break;
        

        case 'k':
            strcat(inputScale,"Kelvin");
            outputTemp1 = userTemp - 273.15;
            outputTemp2 = 32.0+(outputTemp1*1.8);
            outputScale1 = 'C';
            outputScale2 = 'F';
            break;
        
        default:
            break;

        
    }
    //Prints output
    printf("%0.2f %s converts to:",userTemp,inputScale);
    printf("\n\t%0.2f %c",outputTemp1,outputScale1);
    printf("\n\t%0.2f %c",outputTemp2,outputScale2);
}