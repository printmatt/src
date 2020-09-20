#include <stdio.h>
#include <stddef.h>
#include "isPalindrome.h"

// Find the largest palindrome as a product of 2 three-digits numbers
int main(){
    int firstNum,secondNum;
    int result = 0;
     // Run through all possible three digit number for the first number
     for(size_t i = 100; i <= 999; i++){
         // Run through all possible three digit number for the second number
         for(size_t j = 100; j<=999; j++){
             // Replace the values of our first, second number and update result
             if(isPalindrome(i*j)==0 && i*j>result){
                 firstNum = i;
                 secondNum = j;
                 result = i*j;
             }
         }
     }
     // Print the largest possible output
     printf("%d,%1d,%1d",firstNum,secondNum,result);
}



