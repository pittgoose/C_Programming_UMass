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
// Description: Program to generate a table of prime numbers
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int d;
    int p;
    _Bool isPrime;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    for (p = 2; p <= 50; ++p) {
        isPrime = 1;
        
        for (d = 2; d < p; ++d){
            if (p % d == 0) {
                isPrime = 0;
            }
        }
        if (isPrime != 0){
                printf("%i ", p);
        }
        
        
    }
    printf("\n");
    return 0;
    
}