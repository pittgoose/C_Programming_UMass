#include <stdio.h>
#include <stdlib.h>   /* for malloc */
#include <ctype.h>

// CONSTANTS
#define STD_HOURS 40.0f // Standard number of work hours per week
#define OVERTIME_MULTIPLIER 1.5f // Overtime wage calculator
#define NUM_EMPLOYEES 5 // The program will ask for 5 entries, store 5 values in each array etc.
#define MAX_HOURS 60 // Does not allow an employee to work more than 60 hours in a week
#define MAX_NAME_LEN 20 // Maximum name constraint. Can now be changed here at will

struct employee
{
    char first_name [10];
    char last_name  [10];
    long int id_number;
    float wage;
    float hours;
    float overtime;
    float gross;
    
    struct employee *next;
};
// *******************************************************************
// Function calculate_overtime
//
// Purpose: This function will calculate the number of overtime
//          hours worked by a given number of employees. It will
//          save each value into an array.
//
// Parameters: emp1 - a pointer to a linked list
//
// Returns: Nothing (void)
//
// *******************************************************************
void calculate_overtime (struct employee *emp1)
{
    struct employee *tmp;   /* tmp pointer value to current node */
    
    for (tmp = emp1; tmp ; tmp = tmp->next) {
        // Calculate the overtime hours if an employee worked over the standard amount
        if (tmp->hours > STD_HOURS) {
            tmp->overtime = tmp->hours - STD_HOURS;
        }
        else {
            // If the employee didn't work any overtime hours 0 is set as the value
            tmp->overtime = 0;
        }
    }
}

// *******************************************************************
// Function calculate_gross_pay
//
// Purpose: This function will calculate the gross pay for a given
//          number of employees.
//
// Parameters: emp1 - a pointer to a linked list
//
// Returns: Nothing (void)
//
// *******************************************************************
void calculate_gross_pay (struct employee *emp1)
{
    struct employee *tmp;   /* tmp pointer value to current node */
    
    for (tmp = emp1; tmp ; tmp = tmp->next) {
        // Calculate the gross pay if overtime was worked
        if (tmp->overtime > 0) {
            tmp->gross = STD_HOURS * tmp->wage; // Calculates pay for standard hours
            // Calculates pay for overtime hours and adds it to the total
            tmp->gross += tmp->overtime * tmp->wage * OVERTIME_MULTIPLIER;         }
        else { // If no overtime was worked
            tmp->gross = tmp->wage * tmp->hours;
        }
    }
}

/*-----------------------------------------------------------------------------*/
/*                                                                             */
/* FUNCTION:  print_list                                                       */
/*                                                                             */
/* DESCRIPTION:  This function will print the contents of a linked             */
/*               list.  It will traverse the list from beginning to the        */
/*               end, printing the contents at each node.                      */
/*                                                                             */
/* PARAMETERS:   emp1 - pointer to a linked list                               */
/*                                                                             */
/* OUTPUTS:      None                                                          */
/*                                                                             */
/* CALLS:        None                                                          */
/*                                                                             */
/*-----------------------------------------------------------------------------*/
void print_list(struct employee *emp1)
{
    struct employee *tmp;   /* tmp pointer value to current node */
    int i = 0;              /* counts the nodes printed          */
    
    // Print out header information for data to be displayed
    printf ("\n--------------------------------------------------------------\n");
    printf ("Name\t\t\tClock#\tWage\tHours\tOT\tGross\n");
    printf ("--------------------------------------------------------------\n");
    
    /* Start a beginning of list and print out each value               */
    /* loop until tmp points to null (remember null is 0 or false)      */
    for(tmp = emp1; tmp ; tmp = tmp->next)
    {
        i++;
        printf ("%s %s\t\t%06li\t%.2f\t%.1f\t%.1f\t%4.2f\n", tmp->first_name, tmp->last_name ,tmp->id_number, tmp->wage, tmp->hours, tmp->overtime, tmp->gross);

    }
    
    printf("\n\nTotal Number of Employees = %d\n", i);
    
}

/*----------------------------------------------------------------------------*/
/*                                                                            */
/* FUNCTION:  main                                                            */
/*                                                                            */
/* DESCRIPTION:  This function will prompt the user for an employee           */
/*               id and wage until the user indicates they are finished.      */
/*               At that point, a list of id and wages will be                */
/*               generated.                                                   */
/*                                                                            */
/* PARAMETERS:   None                                                         */
/*                                                                            */
/* OUTPUTS:      None                                                         */
/*                                                                            */
/* CALLS:        print_list                                                   */
/*                                                                            */
/*----------------------------------------------------------------------------*/
int main ()
{
    
    char answer[80];       /* to see if the user wants to add more employees */
    int more_data = 1;    /* flag to check if another employee is to be processed */
    char value;             /* gets the first character of answer */
    
    struct employee *current_ptr;   /* pointer to current node */
    struct employee *head_ptr;       /* always points to first node */
    
    /* Set up storage for first node */
    head_ptr = (struct employee *) malloc (sizeof(struct employee));
    current_ptr = head_ptr;
    
    while (more_data)
    {
        /* Read in Employee ID and Hourly Wage */
        printf("\nEnter employee ID: ");
        scanf("%li", & current_ptr -> id_number);
        
        printf("\nEnter employee hourly wage: ");
        scanf("%f", & current_ptr -> wage);
        
        printf("\nEnter the employee name (first and last only): ");
        scanf("%s %s", current_ptr->first_name, current_ptr->last_name);
        
        printf("\nEnter the number of hours worked by this employee: ");
        scanf("%f", & current_ptr->hours);
        
        printf("Would you like to add another employee? (y/n): ");
        scanf("%s", answer);
        
        /* Ask user if they want to add another employee */
        if ((value = toupper(answer[0])) != 'Y')
        {
            current_ptr->next = (struct employee *) NULL;
            more_data = 0;
        }
        else
        {
            /* set the next pointer of the current node to point to the new node */
            current_ptr->next = (struct employee *) malloc (sizeof(struct employee));
            /* move the current node pointer to the new node */
            current_ptr = current_ptr->next;
        }
    } /* while */
    
    /* perform the necessary calculations on the employees */
    calculate_overtime(head_ptr);
    calculate_gross_pay(head_ptr);
    
    /* print out listing of all employee id's and wages that were entered */
    print_list(head_ptr);
    
    printf("\n\nEnd of program\n");
    return 0;
}

