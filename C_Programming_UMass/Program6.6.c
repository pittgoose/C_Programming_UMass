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
// Description: Program to implement the sign function
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int number;
    int sign;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    // Request the number from the user
    printf("Please type in a number: ");
    scanf("%i", &number);
    
    // Determine what to display to the user
    if (number < 0) {
        sign = -1;
    }
    else if (number == 0){
        sign = 0;
    }
    else {
        sign = 1;
    }
    
    // Print out the sign of the number
    printf("Sign = %i\n", sign);
    
    return 0;
        
    
}