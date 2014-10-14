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
    int i; // increments the loop 1 through 10
    int n; // decrements the factorial loop
    double factorial_number;
    
    //-*-*-*-*-End Variable Declarations-*-*-*-*-
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    
    printf("Number:       Factorial:\n");
    printf("------        ---------\n");
    
    for (i = 1; i <= 100; i++) {
        n = i;
        factorial_number = i;
        do {
            factorial_number = factorial_number * (n - 1);
            n--;
            } while (n > 1);
        
        printf(" %4i             %4f\n", i, factorial_number);
            }
    
}