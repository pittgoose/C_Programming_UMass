#include <stdio.h>
#include <stdlib.h> /* for malloc */
#include <string.h> /* for strcpy */

#define STD_HOURS 40.0
#define OT_RATE 1.5

/* define employee structure */
typedef struct employee
{
    char name[20];
    long id_number;
    float wage;
    float hours;
    float overtime;
    float gross;
    
} EMPLOYEE;

/* define linked list of employees */

typedef struct linked_list_node
{
    EMPLOYEE emp;
    struct linked_list_node *next;
    
} LINKED_LIST_NODE;

//---------------------------------------------------
//
// FUNCTION: create_node
//
// DESCRIPTION: Creates a node for the linked list.
//
// PARAMETERS: None
//
// OUTPUTS: A new node for the linked list
//
//-----------------------------------------------------
LINKED_LIST_NODE * create_node ()
{
    return (LINKED_LIST_NODE *) malloc(sizeof(struct linked_list_node));
}

int main ( )
{
    /* pointer to a linked list node */
    LINKED_LIST_NODE * ptr;
    
    /* create and point to one node in the heap */
    ptr = create_node ( );
    
    strcpy (ptr->emp.name, "Tim Niesen");
    ptr->emp.id_number = 12345;
    ptr->emp.wage = 200.25;
    ptr->emp.hours = 40.0;
    
    /* Determine ot hours and gross pay */
    if (ptr->emp.hours > STD_HOURS)
    {
        ptr->emp.overtime = ptr->emp.hours - STD_HOURS;
        ptr->emp.gross = (ptr->emp.wage * STD_HOURS)
        + (ptr->emp.overtime *
           (ptr->emp.wage * OT_RATE));
    }
    else /* no ot */
    {
        ptr->emp.overtime = 0;
        ptr->emp.gross = ptr->emp.wage * ptr->emp.hours;
    }
    
    printf ("Total Gross Pay: $%8.2f \n", ptr->emp.gross);
    
    return (0);
}