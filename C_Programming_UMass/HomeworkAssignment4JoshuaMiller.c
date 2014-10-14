//----------------------------------------------------
//
// HOMEWORK: Assignment 4 - Employee wage calculator using functions
//
// Name: Joshua Miller
//
// Class: C Programming,
//
// Date: 4 October, 2014
//
// Description: Calculate wages for employees using functions
//
//----------------------------------------------------

#include <stdio.h>

// CONSTANTS
#define STD_HOURS 40.0f // Standard number of work hours per week
#define OVERTIME_MULTIPLIER 1.5f // Time and a half wage calculator
#define TOTAL_EMPLOYEES 5 // The program will ask for 5 entries, store 5 values in each array etc.
#define MAX_HOURS 60 // Does not allow an employee to work more than 60 hours in a week

int main(void)
{
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    long clock_number[TOTAL_EMPLOYEES] = {98401,526488,765349,34645,127615}; // Employee numbers
    float gross[TOTAL_EMPLOYEES]; // Holds the gross pay amount for each employee
    float hours[TOTAL_EMPLOYEES]; // Holds the total hours worked per employee
    float overtime_hours[TOTAL_EMPLOYEES]; // Holds the overtime hours worked per employee
    float wage_rate[TOTAL_EMPLOYEES] = {10.60,9.75,10.50,12.25,8.35}; // Wage rate for each employee
    
    // Function declarations
    void get_employee_hours (long emp_num[], float emp_hrs[], int size);
    void calculate_overtime (float emp_hrs[], float ot[], int size);
    void calculate_gross_pay (float emp_hrs[], float ot[], float hrly_wage[], float grs_pay[], int size);
    void print_employee_wages (long emp_num[], float hrly_wage[], float emp_hrs[], float ot[], float grs_pay[], int size);
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    get_employee_hours(clock_number, hours, TOTAL_EMPLOYEES);
    calculate_overtime(hours, overtime_hours, TOTAL_EMPLOYEES);
    calculate_gross_pay(hours, overtime_hours, wage_rate, gross, TOTAL_EMPLOYEES);
    print_employee_wages(clock_number, wage_rate, hours, overtime_hours, gross, TOTAL_EMPLOYEES);
    
    return 0;
}

//*******************************************************************
// Function get_employee_hours
//
// Purpose: This function will get the hours worked for a given
// number of employees. It will save each value into an array.
//
// Parameters: emp_num - the employees number
//             emp_hrs - # of hours the employee worked
//             size - the number of employees to input
//
// Returns: no return
//
//*******************************************************************
void get_employee_hours (long emp_num[], float emp_hrs[], int size)
{
    int i; // To increment the loop
    for (i = 0; i < size; ++i) {
        // Request the number of hours worked for each employee
        printf("Please enter the number of hours worked for employee %li: ", emp_num[i]);
        scanf("%f", &emp_hrs[i]);
        
        // Make sure the hours entered is in a proper range
        while (emp_hrs[i] < 0 || emp_hrs[i] > MAX_HOURS) {
            printf("*That is not a valid number of hours.* \nPlease re-enter the number of hours worked for employee %li: ", emp_num[i]);
            scanf("%f", &emp_hrs[i]);
        }
    }
}

//*******************************************************************
// Function calculate_overtime_hours
//
// Purpose: This function will calculate the number of overtime
// hours worked by a given number of employees. It will save each
// value into an array.
//
// Parameters: emp_hrs - # of hours the employee worked
//             ot - # of overtime hours the employee worked
//             size - the number of employees to input
//
// Returns: no return
//
//*******************************************************************
void calculate_overtime (float emp_hrs[], float ot[], int size)
{
    int i; // To increment the loop
    for (i = 0; i < size; ++i) {
        // Calculate the overtime hours if an employee worked over the standard amount
        if (emp_hrs[i] > STD_HOURS) {
        ot[i] = emp_hrs[i] - STD_HOURS;
        }
        else {
            // If the employee didn't work any overtime hours 0 is set as the value
            ot[i] = 0;
        }
    }
}

//*******************************************************************
// Function calculate_gross_pay
//
// Purpose: This function will calculate the gross pay for a given
// number of employees.
//
// Parameters: emp_hrs - # of hours the employee worked
//             ot - # of overtime hours the employee worked
//             hrly_wage - how much the employees hourly wage is
//             grs_pay - the final gross pay for each employee
//             size - the number of employees to input
//
// Returns: no return
//
//*******************************************************************

void calculate_gross_pay (float emp_hrs[], float ot[], float hrly_wage[], float grs_pay[], int size)
{
    int i; // To increment the loop
    for (i = 0; i < size; ++i) {
        // Calculate the gross pay if overtime was worked
        if (ot[i] > 0) {
            grs_pay[i] = STD_HOURS * hrly_wage[i]; // Calculates pay for standard hours
            grs_pay[i] += ot[i] * hrly_wage[i] * OVERTIME_MULTIPLIER; // Calculates pay for overtime hours and adds it to the total
        }
        else { // If no overtime was worked
            grs_pay[i] = hrly_wage[i] * emp_hrs[i];
        }
    }
}

//*******************************************************************
// Function print_employee_wages
//
// Purpose: This function will print out the wages of each employee.
//
// Parameters: emp_num - the employees number
//             hrly_wage - how much the employees hourly wage is
//             emp_hrs - # of hours the employee worked
//             ot - # of overtime hours the employee worked
//             grs_pay - the final gross pay for each employee
//             size - the number of employees to input
//
// Returns: no return
//
//*******************************************************************
void print_employee_wages (long emp_num[], float hrly_wage[], float emp_hrs[], float ot[], float grs_pay[], int size)
{
    int i; // To increment the loop
    
    // Print out header information for data to be displayed
    printf ("\n--------------------------------------\n");
    printf ("Clock#\tWage\tHours\tO-time\tGross\n");
    printf ("--------------------------------------\n");
    
    // Print out employee information to the screen
    for (i = 0; i < size; ++i) {
        printf ("%06li\t%2.2f\t%2.1f\t%2.1f\t%4.2f\n",emp_num[i], hrly_wage[i], emp_hrs[i], ot[i], grs_pay[i]);
    }
    printf("\n");

}


