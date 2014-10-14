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
    int n;                  // Used to increment the second loop
    int number;             // Used to input from the user how many times to increment the loop
    int triangular_number;  // Used to store the output
    int counter;            // Used to increment the first loop
    
    
    //-*-*-*-*-End Variable Declarations-*-*-*-*-
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    
    // Allow the user to calculate 5 different triangular numbers
    for (counter = 1; counter <= 5; counter++) {
        
        // User inputs the triangular number they want to calculate
        printf("What triangular number do you want? ");
        scanf("%i", &number);
        
        triangular_number = 0;
        
        // Calculate the chosen number
        for (n = 1; n <= number; n++) {
            triangular_number += n;
        }
        
        // Print the chosen number
        printf("Triangular number %i is %i\n\n", number, triangular_number);
    }
    
    return 0;
    
}