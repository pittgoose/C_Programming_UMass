//----------------------------------------------------
//
// HOMEWORK: fill in the assignment number
//
// Name:
//
// Class: C Programming,
//
// Date:
//
// Description: Program to determine if a number is even or odd
//
//----------------------------------------------------

#include <stdio.h>

int main(void)
{
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int number_to_test;
    int remainder;
    
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    // Request the number to test from the user
    printf("Enter your number to be tested.: ");
    scanf("%i", &number_to_test);
    
    // Perform a modulus divide on the number by two and assign the remainder to the variable "remainder"
    remainder = number_to_test % 2;
    
    // Use the if statement to decide what to display to the user
    if (remainder == 0) {
        printf("The number is even.\n");
    }
    else {
        printf("The number is odd.\n");
    }
        
    /*
    if (remainder != 0) {
        printf("The number is odd.\n");
    }*/
    
    return 0;
    
}