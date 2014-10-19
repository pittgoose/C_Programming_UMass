// *******************************************************************
//
// HOMEWORK: Assignment 6 - Strings
//
// Name: Joshua Miller
//
// Class: C Programming
//
// Date: 18 October, 2014
//
// Description: This program prompts the user for the number of hours
//              worked for each employee. It then calculates gross
//              pay including overtime and displays the results in
//              table. Functions and structures are used as well as
//              strings from the C String Library.
//
// *******************************************************************

#include <stdio.h>
#include <string.h>

// CONSTANTS
#define STD_HOURS 40.0f // Standard number of work hours per week
#define OVERTIME_MULTIPLIER 1.5f // Overtime wage calculator
#define NUM_EMPLOYEES 5 // The program will ask for 5 entries, store 5 values in each array etc.
#define MAX_HOURS 60 // Does not allow an employee to work more than 60 hours in a week

struct employee
{
    char  name [20];
    long  id_number;
    float wage;
    float hours;
    float overtime;
    float gross;
};

int main (void)
{
    // Initialize an array of structures with the employee number and wage rate
    struct employee employees[NUM_EMPLOYEES] =
    {
        {"Connie Cobol", 98401, 10.60}, {"Mary Apl", 526488, 9.75}, {"Frank Fortran", 765349, 10.50},
        {"Jeff Ada", 34645, 12.25}, {"Anton Pascal", 127615, 10.00}
    };
    
    // Function declarations
    void get_hours (struct employee employees[], int size);
    void calculate_overtime (struct employee employees[], int size);
    void calculate_gross_pay (struct employee employees[], int size);
    void print_employee_wages (struct employee employees[], int size);
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    get_hours(employees, NUM_EMPLOYEES);
    calculate_overtime(employees, NUM_EMPLOYEES);
    calculate_gross_pay(employees, NUM_EMPLOYEES);
    print_employee_wages(employees, NUM_EMPLOYEES);
}

// *******************************************************************
// Function get_hours
//
// Purpose: This function will get the hours worked for a given
//          number of employees. It will save each value into an
//          array.
//
// Parameters: employees - the array of structures for employees
//             size - the number of employees to input
//
// Returns: Nothing (void)
//
// *******************************************************************
void get_hours (struct employee employees[], int size)
{
    int i; // To increment the loop
    for (i = 0; i < size; ++i) {
        // Request the number of hours worked for each employee
        printf("Please enter the number of hours worked for employee %s: ", employees[i].name);
        scanf("%f", &employees[i].hours);
        
        // Make sure the hours entered is in a proper range
        while (employees[i].hours < 0 || employees[i].hours > MAX_HOURS) {
            printf("*That is not a valid number of hours.* \nPlease re-enter the number of hours worked for employee %s: ", employees[i].name);            scanf("%f", &employees[i].hours);
        }
    }
}

// *******************************************************************
// Function calculate_overtime
//
// Purpose: This function will calculate the number of overtime
//          hours worked by a given number of employees. It will
//          save each value into an array.
//
// Parameters: employees - the array of structures for employees
//             size - the number of employees to input
//
// Returns: Nothing (void)
//
// *******************************************************************
void calculate_overtime (struct employee employees[], int size)
{
    int i; // To increment the loop
    for (i = 0; i < size; ++i) {
        // Calculate the overtime hours if an employee worked over the standard amount
        if (employees[i].hours > STD_HOURS) {
            employees[i].overtime = employees[i].hours - STD_HOURS;
        }
        else {
            // If the employee didn't work any overtime hours 0 is set as the value
            employees[i].overtime = 0;
        }
    }
}

// *******************************************************************
// Function calculate_gross_pay
//
// Purpose: This function will calculate the gross pay for a given
//          number of employees.
//
// Parameters: employees - the array of structures for employees
//             size - the number of employees to input
//
// Returns: Nothing (void)
//
// *******************************************************************

void calculate_gross_pay (struct employee employees[], int size)
{
    int i; // To increment the loop
    for (i = 0; i < size; ++i) {
        // Calculate the gross pay if overtime was worked
        if (employees[i].overtime > 0) {
            employees[i].gross = STD_HOURS * employees[i].wage; // Calculates pay for standard hours
            employees[i].gross += employees[i].overtime * employees[i].wage * OVERTIME_MULTIPLIER; // Calculates pay for overtime hours and adds it to the total
        }
        else { // If no overtime was worked
            employees[i].gross = employees[i].wage * employees[i].hours;
        }
    }
}

// *******************************************************************
// Function print_employee_wages
//
// Purpose: This function will print out the gross
//          wages of each employee.
//
// Parameters: employees - the array of structures for employees
//             size - the number of employees to input
//
// Returns: Nothing (void)
//
// *******************************************************************
void print_employee_wages (struct employee employees[], int size)
{
    int i; // To increment the loop
    float total_hours = 0;
    float total_ot = 0;
    float total_gross = 0;
    float min_hours = employees[0].hours;
    float min_ot = employees[0].overtime;
    float min_gross = employees[0].gross;
    float max_hours = employees[0].hours;
    float max_ot = employees[0].overtime;
    float max_gross = employees[0].gross;
    
    // NEW VARIABLES
    float min_array[size];
    float max_array[size];
    
    // -*-* structure of totals *-*-
    
    // Print out header information for data to be displayed
    printf ("\n--------------------------------------------------------------\n");
    printf ("Name\t\t\tClock#\tWage\tHours\tOT\tGross\n");
    printf ("--------------------------------------------------------------\n");
    
    // Print out employee information to the screen
    for (i = 0; i < size; ++i) {
        printf ("%s\t\t%06li\t%.2f\t%.1f\t%.1f\t%4.2f\n", employees[i].name ,employees[i].id_number, employees[i].wage, employees[i].hours, employees[i].overtime, employees[i].gross);
        
        // Totals and average can be calculated from these variables
        total_hours += employees[i].hours;
        total_ot += employees[i].overtime;
        total_gross += employees[i].gross;
        
        // Minimums
        if (min_hours > employees[i].hours) {
            min_hours = employees[i].hours;
        }
        
        if (min_ot > employees[i].overtime) {
            min_ot = employees[i].overtime;
        }
        
        if (min_gross > employees[i].gross) {
            min_gross = employees[i].gross;
        }
        
        // Maximums
        if (max_hours < employees[i].hours) {
            max_hours = employees[i].hours;
        }
        
        if (max_ot < employees[i].overtime) {
            max_ot = employees[i].overtime;
        }
        
        if (max_gross < employees[i].gross) {
            max_gross = employees[i].gross;
        }
    }
    printf("\n");
 

    // Print out various data bits
    printf ("--------------------------------------------------------------\n");
    // Total of hours, overtime hours, and gross wages paid
    printf("Total:\t\t\t\t\t%.1f\t%.1f\t\%.2f\n", total_hours, total_ot, total_gross);
    // Average of hours, overtime hours, and gross wages paid
    printf("Average:\t\t\t\t%.1f\t%.1f\t\%.2f\n", total_hours / size, total_ot / size, total_gross / size);
    // Minimum hours, overtime, and gross
    printf("Minimum:\t\t\t\t%.1f\t%.1f\t\%.2f\n", min_hours, min_ot, min_gross);
    // Maximum hours, overtime, and gross
    printf("Maximum:\t\t\t\t%.1f\t%.1f\t\%.2f\n", max_hours, max_ot, max_gross);
    
}
