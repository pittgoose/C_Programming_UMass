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
    
    /* Begin printing out the table */
    printf("\n\nTABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n   Sum from 1 to n\n");
    printf("---  ---------------\n");
    
    triangular_number = 0;
    
    /* Adding numbers to find the 8th triangular number */
    for ( n=0; n <= 300; n = n + 10) {
        triangular_number += n;
        printf(" %3i            %i\n", n, triangular_number);
        
        if (n % 10 == 0) {
            printf("\n");
        }
    }
    
    return 0;
    
    
    
}