// *******************************************************************
//
// HOMEWORK: Assignment 7 - Pointers
//
// Name: Joshua Miller
//
// Class: C Programming
//
// Date: 27 October, 2014
//
// Description: This program prompts the user for the number of hours
//              worked for each employee. It then calculates gross
//              pay including overtime and displays the results in
//              table. Functions and structures are used as well as
//              strings from the C String Library. Now using pointers
//              as well
//
// *******************************************************************

#include <stdio.h>
#include <string.h>

// CONSTANTS
#define STD_HOURS 40.0f // Standard number of work hours per week
#define OVERTIME_MULTIPLIER 1.5f // Overtime wage calculator
#define NUM_EMPLOYEES 5 // The program will ask for 5 entries, store 5 values in each array etc.
#define MAX_HOURS 60 // Does not allow an employee to work more than 60 hours in a week
#define MAX_NAME_LEN 20 // Maximum name constraint. Can now be changed here at will

struct employee
{
    char  name [MAX_NAME_LEN];
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
    void get_hours (struct employee *emp_ptr, int size);
    void calculate_gross_pay (struct employee *emp_ptr, int size);
    void calculate_overtime (struct employee *emp_ptr, int size);
    void print_employee_wages (struct employee *emp_ptr, int size);
    
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
void get_hours (struct employee *emp_ptr, int size)
{
    int i; // To increment the loop
    
    for (i = 0; i < size; ++emp_ptr, ++i) {
        // Request the number of hours worked for each employee
        printf("Please enter the number of hours worked for employee %s: ", emp_ptr->name);
        scanf("%f", &emp_ptr->hours);
        
        // Make sure the hours entered is in a proper range
        while (emp_ptr->hours < 0 || emp_ptr->hours > MAX_HOURS) {
            printf("*That is not a valid number of hours.* \nPlease re-enter the number of hours worked for employee %s: ", emp_ptr->name);            scanf("%f", &emp_ptr->hours);
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
void calculate_overtime (struct employee *emp_ptr, int size)
{
    int i; // To increment the loop
    
    for (i = 0; i < size; ++emp_ptr, ++i) {
        // Calculate the overtime hours if an employee worked over the standard amount
        if (emp_ptr->hours > STD_HOURS) {
            emp_ptr->overtime = emp_ptr->hours - STD_HOURS;
        }
        else {
            // If the employee didn't work any overtime hours 0 is set as the value
            emp_ptr->overtime = 0;
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
void calculate_gross_pay (struct employee *emp_ptr, int size)
{
    int i; // To increment the loop
    
    for (i = 0; i < size; ++emp_ptr, ++i) {
        // Calculate the gross pay if overtime was worked
        if (emp_ptr->overtime > 0) {
            emp_ptr->gross = STD_HOURS * emp_ptr->wage; // Calculates pay for standard hours
            // Calculates pay for overtime hours and adds it to the total
            emp_ptr->gross += emp_ptr->overtime * emp_ptr->wage * OVERTIME_MULTIPLIER;         }
        else { // If no overtime was worked
            emp_ptr->gross = emp_ptr->wage * emp_ptr->hours;
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
void print_employee_wages (struct employee *emp_ptr, int size)
{
    int i; // To increment the loop
    
    // Declare functions called
    void get_totals (struct employee *emp_ptr, float total_array[], int size);
    void get_minimum (struct employee *emp_ptr, float minimum[], int size);
    void get_maximum (struct employee *emp_ptr, float maximum[], int size);
    
    // Print out header information for data to be displayed
    printf ("\n--------------------------------------------------------------\n");
    printf ("Name\t\t\tClock#\tWage\tHours\tOT\tGross\n");
    printf ("--------------------------------------------------------------\n");
    
    // Print out employee information to the screen
    for (i = 0; i < size; ++emp_ptr, ++i) {
        printf ("%s\t\t%06li\t%.2f\t%.1f\t%.1f\t%4.2f\n", emp_ptr->name ,emp_ptr->id_number, emp_ptr->wage, emp_ptr->hours, emp_ptr->overtime, emp_ptr->gross);
    }
    printf("\n");
}
