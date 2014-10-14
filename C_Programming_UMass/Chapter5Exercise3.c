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
    int n;      // Loop variable
    int triangular_number;
    
    
    //-*-*-*-*-End Variable Declarations-*-*-*-*-
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    
    printf("The triangular numbers of every fifth number between 5 and 50 are:\n");
    
    for (n = 5; n <= 50; n += 5) {
        triangular_number = n * (n + 1) / 2;
        printf("%i\n", triangular_number);
    }
    return 0;
    
}