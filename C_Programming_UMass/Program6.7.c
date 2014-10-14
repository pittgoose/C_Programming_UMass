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
// Description: Program to categorize a single character that is entered at the terminal
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    char c;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    // Request a character from the user
    printf("Enter a single character: \n");
    scanf("%c", &c);
    
    // Determine what the character is
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("It's an alphabetic character.\n");
    }
    else if (c >= '0' && c <= '9') {
        printf("It's a digit.\n");
    }
    else {
        printf("It's a special character.\n");
    }
    
    return 0;
    
}