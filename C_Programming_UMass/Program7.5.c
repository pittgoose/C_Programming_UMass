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
// Description: initializing arrays
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int array_values[10] = {0, 1, 4, 9, 16};
    int i;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    for (i = 5; i < 10; ++i) {
        array_values[i] = i * i;
    }
    
    for (i = 0; i < 10; ++i) {
        printf("array_values[%i] = %i\n", i, array_values[i]);
    }
    
    
    
    return 0;
}