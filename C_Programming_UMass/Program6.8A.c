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
// Description: Program to evaluate simple expressions of the form: number  operator  number
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    char operator;
    float value1;
    float value2;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    // Request the operation from the user
    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);
    
    // Perform the math
    if (operator == '+') {
        printf("%.2f\n", value1 + value2);
    }
    else if (operator == '-') {
        printf("%.2f\n", value1 - value2);
    }
    else if (operator == '*') {
        printf("%.2f\n", value1 * value2);
    }
    else if (operator == '/') {
        if (value2 == 0) {
            printf("Division by zero.\n");
        }
        else {
        printf("%.2f\n", value1 / value2);
        }
    }
    else {
        printf("Unknown operator.\n");
    }
    
    return 0;
}