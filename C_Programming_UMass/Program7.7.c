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
    int base;
    const char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int converted_number[64];
    int index = 0;
    int next_digit;
    long int number_to_convert;
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    // Get the number and add the base
    printf("Number to be converted? ");
    scanf("%ld", &number_to_convert);
    printf("Base? ");
    scanf("%i", &base);
    
    // Convert to the indicated base
    do {
        converted_number[index] = number_to_convert % base;
        ++index;
        number_to_convert /= base;
    } while (number_to_convert != 0);
    
    // Display the results in reverse order
    printf("Converted number = ");
    
    for (--index; index >= 0 ; --index) {
        next_digit = converted_number[index];
        printf("%c", base_digits[next_digit]);
    }
    
    printf("\n");
    
    
    
    return 0;
}