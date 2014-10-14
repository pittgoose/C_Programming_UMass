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
// Description: Program to determin if a year is a leap year
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int remainder_4;
    int remainder_100;
    int remainder_400;
    int year;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    // Request a year from the user
    printf("Enter the year to be tested: ");
    scanf("%i", &year);
    
    // Calculate and store the remainders of the year divided by 4, 100 and 400
    remainder_4 = year % 4;
    remainder_100 = year % 100;
    remainder_400 = year % 400;
    
    // Determine the leap year status
    if ( (remainder_4 == 0 && remainder_100 !=0) || (remainder_400 == 0)) {
        printf("It's a leap year!\n");
    }
    else {
        printf("Nope, it's not a leap year.\n");
    }
    
    return 0;
        
}