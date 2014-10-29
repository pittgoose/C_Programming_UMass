//----------------------------------------------------
//
// HOMEWORK: Assignment 1 - Looping
//
// Name: Joshua Miller
//
// Class: C Programming,
//
// Date: 14 Sep 2014
//
// Description: Write a C program that will calculate the pay for employees.
//
//----------------------------------------------------

#include <stdio.h>

int main(void)
{
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int clock_number; // Unique identifier for the employee
    int number_of_employees; // Tells the program how many times to loop
    float gross_pay; // This will be calculated from the product of the number_of_hours and the wage_rate
    float number_of_hours; // How many hours the employee has worked in the pay period
    float wage_rate; // How much the employee makes per hour
    
    // Prompt for number of employees to process
    printf ("How many employees would you like to calculate wages for?\n");
    scanf ("%i", &number_of_employees);
    
    // Use any type of loop, repeat until all employees processed
    for (; number_of_employees > 0; --number_of_employees) {
        // Prompt for input on a single employee from the screen
        printf ("Which clock # are you calculating?\n");
        scanf ("%i", &clock_number);
        printf ("What is this employees hourly rate?\n");
        scanf ("%f", &wage_rate);
        printf ("How many hours did this employee work?\n");
        scanf ("%f", &number_of_hours);
        
        // Calculate gross pay
        gross_pay = wage_rate * number_of_hours;
        
        // Print out employee information to the screen
        printf ("-------------------------------\n");
        printf ("Clock#\tWage\tHours\tGross\n");
        printf ("-------------------------------\n");
        printf ("%06i\t%2.2f\t%2.1f\t%4.2f\n\n",clock_number, wage_rate, number_of_hours, gross_pay);
        
    } // end the loop
    
    return (0);
    
} // end mainu