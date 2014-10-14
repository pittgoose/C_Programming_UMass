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
    int u;
    int v;
    int temp;
    
    
    //-*-*-*-*-End Variable Declarations-*-*-*-*-
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    
    // Aquire from the users two non-negative numbers to find the greatest common divisor
    printf("Please type in two nonnegative integers.\n");
    scanf("%i%i", &u, &v);
    
    // Execute the while loop to find the GCD
    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    
    // Print the GCD to the screen
    printf("Their greatest common divisor is %i\n", u);
    
    return 0;
    
}