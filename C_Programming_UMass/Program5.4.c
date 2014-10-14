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
    int n;                  /* to increment the loop */
    int number;             /* how many times to run the loop */
    int triangular_number;  /* output the loop */
    
    
    /* End Variable Declarations */
    
    /* Begin creating the nuts and bolts */
    
    /* Request the triangular number the user wants to calculate */
    printf("What triangular number do you want? ");
    scanf("%i", &number);
    
    // Set triangular number to 0
    triangular_number = 0;
    
    //Calculate the triangular number
    for (n = 1; n <= number; n++) {
        triangular_number += n;
    }
    
    // Print the triangular number to the screen
    printf("Triangular number %i is %i\n", number, triangular_number);
    
    return  0;
    
    
}