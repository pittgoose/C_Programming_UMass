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
    int n;          // Used to calculate the loop
    
    
    //-*-*-*-*-End Variable Declarations-*-*-*-*-
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    
    printf("Number:        Number Squared:\n");
    printf("------         ---------------\n");
    
    for (n = 1; n <= 10; n++) {
        printf(" %3i                %3i\n", n, n *n);
        
    }
    return 0;
}