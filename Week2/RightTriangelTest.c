#include <stdio.h>

int main(){\
    int b,p,h;

    if(1){
        printf("Welcome!\n");
    }
// Retrieve triangle information
    printf("Enter the base length: ");
    scanf("%d",&b);
    printf("Enter the perpendicular length: ");
    scanf("%d",&p);
    printf("Enter the hypotenuse length (the longest): ");
    scanf("%d",&h);

// Test for right triangle using Pythagorean
    if (h*h == b*b + p*p){
        printf("You have a right triangle");
    }
    else if (h*h > b*b + p*p){
        printf("You have an obtuse triangle");
    }
    else if (h*h < b*b + p*p){
        printf("You have an acute triangle");
    }
    else{
        printf("That is not a right triangle");
    }

}