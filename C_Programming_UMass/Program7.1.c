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
// Description: Program Example 7.1 from chapter 7 - initial work with arrays
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int index;
    int values[10] = {0};
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] = values[0] + values[5];
    values[9] = values[5] / 10;
    --values[2];
    
    for (index = 0; index < 10; ++index) {
        printf("values[%i] = %i\n", index, values[index]);
    }
    return 0;
    
}