//----------------------------------------------------
//
// HOMEWORK: Chapter 6 Exercise 2
//
// Name:
//
// Class: C Programming,
//
// Date:
//
// Description: Program that asks for two numbers and then divides them
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int value1;
    int value2;
    int product;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    printf("Please enter two numbers: \n");
    scanf("%i %i", &value1, &value2);
    
    product = value1 % value2;
    
    if (product == 0) {
        printf("The first number is evenly divisible by the second number!\n");
    }
    else
        printf("The first number is not evenly divisible by the second number :(\n");
    
    return 0;
    
}