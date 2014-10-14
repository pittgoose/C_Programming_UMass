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
#include <stdbool.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int d;
    bool isPrime;
    int p;
    
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    for (p = 2; p <= 50; ++p) {
        isPrime = true;
        
        for (d = 2; d < p; ++d)
            if (p % d == 0)
                isPrime = false;
    
    if (isPrime != false)
        printf("%i ", p);
    }
    printf("\n");
    
    return 0;
    
    
    
}