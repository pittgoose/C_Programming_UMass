//----------------------------------------------------
//
// HOMEWORK: Assignment 2 - Conditionals
//
// Name: Joshua Miller
//
// Class: C Programming,
//
// Date: 14 Sep 2014
//
// Description: Write a C program that will calculate the pay for employees.
//              Also, calculate overtime wages
//
//----------------------------------------------------

#include <stdio.h>
#define STD_HOURS 40.0
#define TIME_ANDA_HALF 1.5

int main(void)
{
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int clock_number; // Unique identifier for the employee
    int number_of_employees; // Tells the program how many times to loop
    float gross_pay; // This will be calculated from the product of the number_of_hours and the wage_rate
    float number_of_hours; // How many hours the employee has worked in the pay period
    float overtime_hours; // How many overtime hours worked?
    float gross_overtime_pay = 0.0; // This will be calculated from the product of the overtime hours and the wage rate multiplied by 1.5
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
        
        // Determine if overtime hours were worked and if so, assign the overtime hours to a separate variable
        if (number_of_hours > STD_HOURS) { // Only runs if the employee worked overtime
            overtime_hours = number_of_hours - STD_HOURS;
            gross_overtime_pay = overtime_hours * wage_rate * TIME_ANDA_HALF;
            gross_pay = wage_rate * (number_of_hours - overtime_hours);
            gross_pay += gross_overtime_pay;
        }
        else { // Calculate gross pay if the employee didn't work overtime
            gross_pay = wage_rate * number_of_hours;
        }
        
        
        // Print out employee information to the screen
        printf ("--------------------------------------\n");
        printf ("Clock#\tWage\tHours\tO-time\tGross\n");
        printf ("--------------------------------------\n");
        printf ("%06i\t%2.2f\t%2.1f\t%2.1f\t%4.2f\n\n",clock_number, wage_rate, number_of_hours, overtime_hours, gross_pay);
        
    } // end the loop
    
    return (0);
    
} // end mainu