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
// Description: short description of the program
//
//----------------------------------------------------

#include <stdio.h>

int main(void)
{
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int number;
    
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    
    // Request the number from the user
    printf("Type in your number: ");
    scanf("%i", &number);
    
    // Determine if the number is positive or negative
    // If negative, make it positive
    if (number < 0) {
        number = -number;
    }
    
    // Display the absolute value
    printf("The absolute value is %i\n", number);
    
    return 0;
    
}