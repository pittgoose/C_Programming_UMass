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

struct totals
{
    float total_hours;
    float total_ot;
    float total_gross;
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

void get_totals (struct totals emp_totals[], float total_array[], int size)
{
    int i;
    
    for (i = 0; i < size; ++i) {
        total_array[0] += emp_totals[i].total_hours;
        total_array[1] += emp_totals[i].total_ot;
        total_array[2] += emp_totals[i].total_gross;
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
    struct totals emp_totals[size];
    struct totals max_array[size];
    struct totals min_array[size];
    float total[3] = {0};
    float minimum[3] = {0};
    float maximum[3] = {0};
    
    
    // Print out header information for data to be displayed
    printf ("\n--------------------------------------------------------------\n");
    printf ("Name\t\t\tClock#\tWage\tHours\tOT\tGross\n");
    printf ("--------------------------------------------------------------\n");
    
    // Print out employee information to the screen
    for (i = 0; i < size; ++i) {
        printf ("%s\t\t%06li\t%.2f\t%.1f\t%.1f\t%4.2f\n", employees[i].name ,employees[i].id_number, employees[i].wage, employees[i].hours, employees[i].overtime, employees[i].gross);
        
        emp_totals[i].total_hours += employees[i].hours;
        emp_totals[i].total_ot += employees[i].overtime;
        emp_totals[i].total_gross += employees[i].gross;
        
        max_array[i].total_hours += employees[i].hours;
        max_array[i].total_ot += employees[i].overtime;
        max_array[i].total_gross += employees[i].gross;
        
        min_array[i].total_hours += employees[i].hours;
        min_array[i].total_ot += employees[i].overtime;
        min_array[i].total_gross += employees[i].gross;    }
    printf("\n");
    
    get_totals (emp_totals, total, size);
   // get_minimum (min_array, minimum, size);
   // get_maximum  (max_array, maximum, size);
 

    // Print out various data bits
    printf ("--------------------------------------------------------------\n");
    // Total of hours, overtime hours, and gross wages paid
    printf("Total:\t\t\t\t\t%.1f\t%.1f\t\%.2f\n", total[0], total[1], total[2]);
    
    // Average of hours, overtime hours, and gross wages paid
    printf("Average:\t\t\t\t%.1f\t%.1f\t\%.2f\n", total[0] / size, total[1] / size, total[2] / size);
    /*
    // Minimum hours, overtime, and gross
    printf("Minimum:\t\t\t\t%.1f\t%.1f\t\%.2f\n", min_hours, min_ot, min_gross);
    // Maximum hours, overtime, and gross
    printf("Maximum:\t\t\t\t%.1f\t%.1f\t\%.2f\n", max_hours, max_ot, max_gross);
    */
}
