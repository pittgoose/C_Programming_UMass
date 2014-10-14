// *******************************************************************
//
// HOMEWORK: Assignment 5 - Structures
//
// Name: Joshua Miller
//
// Class: C Programming
//
// Date: 11 October, 2014
//
// Description: This program prompts the user for the number of hours
//              worked for each employee. It then calculates gross
//              pay including overtime and displays the results in
//              table. Functions and structures are used.
//
// *******************************************************************

#include <stdio.h>

// CONSTANTS
#define STD_HOURS 40.0f // Standard number of work hours per week
#define OVERTIME_MULTIPLIER 1.5f // Overtime wage calculator
#define NUM_EMPLOYEES 5 // The program will ask for 5 entries, store 5 values in each array etc.
#define MAX_HOURS 60 // Does not allow an employee to work more than 60 hours in a week

// Defines "struct employee". Includes all information associated with an employee
struct employee
{
    long int id_number;
    float    wage;
    float    hours;
    float    overtime;
    float    gross;
};

int main (void)
{
    // Initialize an array of structures with the employee number and wage rate
    struct employee employees[NUM_EMPLOYEES] =
    {
        {98401, 10.60}, {526488, 9.75}, {765349, 10.50},
        {34645, 12.25}, {127615, 8.35}
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
        printf("Please enter the number of hours worked for employee %li: ", employees[i].id_number);
        scanf("%f", &employees[i].hours);
        
        // Make sure the hours entered is in a proper range
        while (employees[i].hours < 0 || employees[i].hours > MAX_HOURS) {
            printf("*That is not a valid number of hours.* \nPlease re-enter the number of hours worked for employee %li: ", employees[i].id_number);
            scanf("%f", &employees[i].hours);
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
    
    // Print out header information for data to be displayed
    printf ("\n--------------------------------------\n");
    printf ("Clock#\tWage\tHours\tO-time\tGross\n");
    printf ("--------------------------------------\n");
    
    // Print out employee information to the screen
    for (i = 0; i < size; ++i) {
        printf ("%06li\t%2.2f\t%2.1f\t%2.1f\t%4.2f\n",employees[i].id_number, employees[i].wage, employees[i].hours, employees[i].overtime, employees[i].gross);
    }
    printf("\n");
    
}