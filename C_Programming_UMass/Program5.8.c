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
    int number;
    int right_digit;
    
    
    //-*-*-*-*-End Variable Declarations-*-*-*-*-
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    
    printf("Enter your number:\n");
    scanf("%i", &number);
    
    while (number != 0) {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    
    printf("\n");
    
    return 0;
    
}