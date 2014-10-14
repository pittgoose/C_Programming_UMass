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
// Description: Generate Fibonacci numbers using variable length arrays
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int i;
    int number_of_fibonacci;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
    scanf("%i", &number_of_fibonacci);
    
    if (number_of_fibonacci < 1 || number_of_fibonacci > 75) {
        printf("Bad number, sorry!\n");
        return 1;
    }
    
    unsigned long long int fibonacci[number_of_fibonacci];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for (i = 2; i < number_of_fibonacci; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    
    for (i = 0; i < number_of_fibonacci; ++i) {
        printf("%llu ", fibonacci[i]);
    }
    printf("\n");
    
    
    
    return 0;
}