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

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    float end_product;
    int value1;
    int value2;
    
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    printf("Please enter two numbers: \n");
    scanf("%i %i", &value1, &value2);
    
    if (value2 != 0) {
        end_product = (float) value1 / value2;
        printf("The result of dividing those two numbers is %.3f.\n", end_product);
    }
else
    printf("Division by zero!");
    
    
}