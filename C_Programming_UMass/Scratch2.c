#include <stdio.h>

/* First, define a function */

int sum (int num1, int num2)
{
    return (num1 + num2);
}

int main ()
{
    /* Second, define a pointer to a function which */
    /* receives 2 ints and returns an int */
    int ( *functionPtr ) (int, int);
    
    /* point to address of our sum function */
    functionPtr = &sum;
    
    /* Finally, let's actually use our function pointer */
    int mySum = (*functionPtr)(5, 10); /* the sum is 15 */
    
    printf ("mySum is %i \n", mySum);
    
    return (0);
    
}