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
// Description: 7.3 fibonacci numbers
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int fibonacci[15];
    int i;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    fibonacci[0] = 0; // By definition
    fibonacci[1] = 1; // Ditto
    
    for (i = 2; i < 15; ++i) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }
    
    for (i = 0; i < 15; ++i) {
        printf("%i\n", fibonacci[i]);
    }
    
    
    return 0;
}