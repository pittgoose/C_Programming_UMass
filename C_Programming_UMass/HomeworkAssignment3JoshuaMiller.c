//----------------------------------------------------
//
// HOMEWORK: Assignment 3 - Arrays
//
// Name: Joshua Miller
//
// Class: C Programming
//
// Date: 29 Sep 2014
//
// Description: Write a C program that will calculate the pay for employees.
//              Also, calculate overtime wages. Use Arrays as much as possible.
//
//----------------------------------------------------

#include <stdio.h>
#define STD_HOURS 40.0 // Standard number of work hours per week
#define TIME_ANDA_HALF 1.5 // Time and a half wage calculator
#define TOTAL_EMPLOYEES 5 // The program will ask for 5 entries, store 5 values in each array etc.
#define MAX_HOURS 60 // Does not allow an employee to work more than 60 hours in a week

int main(void)
{
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    const long int clock_number[TOTAL_EMPLOYEES] = {98401, 526488, 765349, 34645, 127615}; // Employee ID's
    const float hourly_wage[TOTAL_EMPLOYEES] = {10.6, 9.75, 10.5, 12.25, 8.35}; // Employees wages per hour
    float gross_pay[TOTAL_EMPLOYEES]; // This will be calculated from the product of the number_of_hours and the wage_rate and the overtime_hours and the time and a half rate
    int i; // To be re-used in the for loops
    float number_of_hours[TOTAL_EMPLOYEES]; // How many hours the employee has worked in the pay period
    float overtime_hours[TOTAL_EMPLOYEES]; // Total overtime hours worked
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    // Input the number of hours per employee
    for (i = 0; i < TOTAL_EMPLOYEES; ++i) {
        printf("Please enter the number of hours worked for employee %li: ", clock_number[i]);
        scanf("%f", &number_of_hours[i]);
        
        // Make sure the hours entered is in a proper range
        while (number_of_hours[i] < 0 || number_of_hours[i] > MAX_HOURS) {
            printf("*That is not a valid number of hours.* \nPlease re-enter the number of hours worked for employee %li: ", clock_number[i]);
            scanf("%f", &number_of_hours[i]);
        }
        
        // Determine if overtime hours were worked and if so, assign the overtime hours to a separate array
        if (number_of_hours[i] > STD_HOURS) { // Only runs if the employee worked overtime
            overtime_hours[i] = number_of_hours[i] - STD_HOURS;
        }
        else  {
            overtime_hours[i] = 0;
        }
        
        // Calculate gross pay
        if (overtime_hours[i] > 0) { // If overtime hours were worked
            gross_pay[i] = STD_HOURS * hourly_wage[i]; // Calculates pay for standard hours
            gross_pay[i] += overtime_hours[i] * hourly_wage[i] * TIME_ANDA_HALF; // Calculates pay for overtime hours and adds it to the total
        }
        else { // If no overtime was worked
            gross_pay[i] = hourly_wage[i] * number_of_hours[i];
        }
    }
    
    // Print out header information for data to be displayed
    printf ("\n--------------------------------------\n");
    printf ("Clock#\tWage\tHours\tO-time\tGross\n");
    printf ("--------------------------------------\n");
    
    // Print out employee information to the screen
    for (i = 0; i < TOTAL_EMPLOYEES; ++i) {
        printf ("%06li\t%2.2f\t%2.1f\t%2.1f\t%4.2f\n",clock_number[i], hourly_wage[i], number_of_hours[i], overtime_hours[i], gross_pay[i]);
    }
    printf("\n");
    
    return 0;
}