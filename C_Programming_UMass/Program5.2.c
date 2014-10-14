/*----------------------------------------------------*/
/*                                                    */
/* HOMEWORK: fill in the assignment number            */
/*                                                    */
/* Name:                                              */
/*                                                    */
/* Class: C Programming,                              */
/*                                                    */
/* Date:                                              */
/*                                                    */
/* Description: short description of the program      */
/*                                                    */
/*----------------------------------------------------*/

#include <stdio.h>
int main(void)
{
    /* Variable Declarations */
    int n;                  /* Variable for the Loop */
    int triangular_number;  /* Variable to hold the output */
    
    
    
    /* End Variable Declarations */
    
    
    triangular_number = 0;
    
    /* Adding numbers to find the 8th triangular number */
    for ( n=1; n <= 200; n=n + 1) {
        triangular_number = triangular_number + n;
    }
    
    /* Displaying the triangular number to the screen */
    printf("The 200th triangular number is %i\n", triangular_number);
    
    return 0;
    
    
    
}