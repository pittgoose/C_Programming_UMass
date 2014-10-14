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
    float average;
    int failure_count = 0;
    int grade;
    int grade_total = 0;
    int i;
    int number_of_grades;
    
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    // Request the number of grades to be entered from the user
    printf("How many grades will you be entering? ");
    scanf("%i", &number_of_grades);
    
    // Request each grade from the user, equal to the number of grades requested above
    for (i = 1; i <= number_of_grades; ++i) {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);
        
        // Add the grade to the sum total
        grade_total += grade;
        
        // Determine if the grade is failing, and if so increase the count
        if (grade < 65) {
            ++failure_count;
        }
        
        // Calculate the average
        average = (float) grade_total / number_of_grades;
    }
    
    // Print the two pieces of information
    printf("\nGrade average = %.2f\n", average);
    printf("Number of failures = %i\n", failure_count);
    
    return 0;
}