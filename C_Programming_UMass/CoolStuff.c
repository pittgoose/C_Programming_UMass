/* 
 1a) - Just the function
 1b) - Just the function
 2) - Just the function
 3a) - Just a code segment (not a complete function or program)
 3b) - Just a code segment (not a complete function or program)
 4) - Just the function
 5) - Just the function
 6) - A complete program ... a main function calling three functions, and three complete functions
 7) - Just the function
 8) - Just a code segment of many structures
 */

 // *******************************************************************
 // 3a) The mathematical operation max(x,y,w,z) can be represented by using the conditional
 // expression operator, as in:
 //
 // max = (x > y && x > z && x > w) ? x : ((y > z && y > w) ? y : ((z > w) ? z : w));
 //
 // Write a corresponding if else statement that is equivalent to the statement above
 // that will set max to the largest value of x, y, w, or z.
 // *******************************************************************
 
 


#include <stdio.h>


// *******************************************************************
// 7. Write a function that raises an integer to a positive integer power.
// Call the function x_to_the_n, taking two integer arguments x and n.
// Have the function return a long int, which represents the results of
// calculating x to the nth power.   Do not use the C pow library function.
//
// Example:  if x = 3 and n = 2, the function would return 9.
//
// NOTE:  Do not use recursion (since that version is in your lecture notes).
// *******************************************************************

// *******************************************************************
// Function x_to_the_n
//
// Purpose: This function will accept two integers and raise the first
//          to the power of the second.
//
// Parameters: x - an integer to be raised
//             n - the exponent to raise it by
//
// Returns: the result of x to the nth power in a lont int format
//
// *******************************************************************
long int x_to_the_n (int x, int n)
{
    long int result = x; //initialize a result and set it to the first power of x
    int i;
    
    // Handle the Zeroth power. Any number to the power of 0 is equal to 1
    if (n == 0) {
        return 1;
    }
    
    // If n is greater than 1, multiply result by x and store the answer back into result until you reach n
    for (i = 1; i < n; ++i) {
        result *= x;
    }
    
    // return the result
    return result;
}

int main (void)
{
    int x = 9;
    int n = 0;
    long int x_to_the_n (int x, int n);
    
    printf("%li\n", x_to_the_n(x, n));
    return 0;
}




// *******************************************************************
// 8. The Federation has asked you to develop a program to keep track of its
// officers.  A sample of the kind of information for each officer is
// shown below.
//
// Name: Mr. James Tiberius Kirk
// Date of Birth:  March 22, 2233
// Address:  23 Falling Rock,
// Riverside, Iowa 52327-0021
// Planet Earth
// Rank: Captain
// Ship: USS Enterprise
// Nickname: Jim
// Favorite Saying: "Bones???"
// Starting Stardate: 41153.7
// Martial Status:  Single
// Starfleet Graduation Date:  June 23, 2212
//
// Name: Mr. Leonard A. McCoy Jr.
// Date of Birth:  7/8/2227
// Address:  8745 South Road
// Jackson, Mississippi 39201-0001
// Planet Earth
// Rank: Chief Medical Officer
// Ship: USS Enterprise
// Nickname:  Bones
// Favorite Saying:  "He's dead Jim."
// Starting Stardate: 41151.8
// Marital Status:  Divorced
// Starfleet Graduation Date:  June 21, 2210
//
// Provide the code need to DECLARE an array of structures given the above
// information.  Don't write a program and don't worry about initializing
// the structure based on the information above.
// Be careful on how you declare the members of a structure.  Grading
// will be based on how the flexibility of your design (i.e., define many
// structures and have structures within structures if necessary).
// Note:  Don't go overboard such as having a structure with only one member
// just to create many structures.
// *******************************************************************





