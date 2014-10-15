// *******************************************************************
// 1) Use the link below for the background needed to create two functions that work with a Trapezoid
//
// a) Write a function that will return the area of a trapezoid
// *******************************************************************

// *******************************************************************
// Function area_of_a_trapezoid
//
// Purpose: This function will calculate the area of a trapezoid,
// given the two bases and the altitude
//
// Parameters: base_1 - first base of the trapezoid
//             base_2 - second base of the trapezoid
//             altitude - altitude of the trapezoid
//
// Returns: the area of the triangle, as a floating point number
//
// *******************************************************************
float area_of_a_trapezoid (float base_1, float base_2, float altitude){
    float area; // This is used to store the area and return it to the calling function
    
    area = ((base_1 + base_2) / 2) * altitude; // Area of a trapezoid is average of the bases multiplied by the altitude
    
    return area; // Return the area to the calling function
}

// *******************************************************************
// b) Write a function that will return the perimeter of a trapezoid
// *******************************************************************

// *******************************************************************
// Function perimeter_of_a_trapezoid
//
// Purpose: This function will calculate the perimeter of a trapezoid,
// given the four sides
//
// Parameters: side_1 - first base of the trapezoid
//             side_2 - second base of the trapezoid
//             side_3 - third base of the trapezoid
//             side_4 - fourth base of the trapezoid
//
// Returns: the perimeter of the triangle, as a floating point number
//
// *******************************************************************
float perimeter_of_a_trapezoid (float side_1, float side_2, float side_3, float side_4){
    float perimeter; // This is used to store the perimeter and return it to the calling function
    
    perimeter = side_1 + side_2 + side_3 + side_4; // Perimeter is calculated by adding all 4 sides
    
    return perimeter; // Return the perimeter to the calling function
}

// *******************************************************************
// 2) Write a function
//
//    int frequency (int theArray [ ], int n, int x)
//
// that counts the number of times the item x appears among the first n elements of theArray
// and returns that count as the frequency of x in theArray.     Use integers for everything!
//
// For example, if the array being passed contained the values    5, 7, 23, 8, 23, 67, 23
//
// ... and n was 7 and x was 23, then it would return a value of 3 since 23 occurs 3 times within
// the first 7 elements of the array.
// *******************************************************************

// *******************************************************************
// Function frequency
//
// Purpose: This function will return the number of times a specified
// number (x) occurs in the first (n) spots of an array.
//
// Parameters: theArray - this is the array to be checked
//             n - the number of array positions to check
//             x - the number to be searching for
//
// Returns: number of occurences
//
// *******************************************************************
int frequency (int theArray [ ], int n, int x){
    int occurences = 0; // Holds the number of times the number appears. Will be returned
    int i;
    
    // Search the array. If there is an occurrence of the number (x), increment "occurrences"
    for (i = 0; i < n; ++i) {
        if (theArray[i] == x) {
            ++occurences;
        }
    }
    return occurences; // Return the number of occurrences to the calling function
}



// *&*&*&*&*&*&*&*&*
// Number 3 here!!!!
// *&*&*&*&*&*&*&*&*



// *******************************************************************
// 4.  Given the following test scores and grade equivalents, write a function
// which is passed a score, and returns a letter grade based on
// the score entered.  A number less than 0 or greater than 100 is invalid.
//
// Score                 Grade
// ------                -----
// 90-100                  A
// 80-89                   B
// 70-79                   C
// 60-69                   D
// 0 -59                   F
// *******************************************************************

// *******************************************************************
// Function letter_grade
//
// Purpose: This function will return the letter corresponding to the
// grade number passed by the calling function. If the number passed
// is invalid, the function returns an I.
//
// Parameters: score - the number to calculate the grade for
//
// Returns: the perimiter of the triangle, as a floating point number
//
// *******************************************************************
char letter_grade (int score){
    char letter; // Letter grade character will be assigned to "letter" and returned to the calling function
    
    // Handle an invalid grad submission
    if (score > 100 || score < 0) {
        return 'I'; // Return an I to the calling function to indicate an improper value passed
    }
    
    // Figure out what the letter grade is
    if (score >= 90) {
        letter = 'A';
    }
    else if (score <= 89 && score >= 80) {
        letter = 'B';
    }
    else if (score <= 79 && score >= 70) {
        letter = 'C';
    }
    else if (score <= 69 && score >= 60) {
        letter = 'D';
    }
    else {
        letter = 'F';
    }
    return letter; // Return the letter grade to the calling funciton
}

// *******************************************************************
// 5) Write a function that is passed an array of characters containing letter grades
// from our previous question, and prints a report that shows the total number
// of occurrences of each letter grade.   Your function should accept both lower
// and upper case grades, for example, both 'b' and 'B' should be bucketed into
// your running total for B grades.   Any grade that is invalid should be bucketed
// as a grade of 'I' for Incomplete.
//
// You must use a switch statement, and your function should accept an array of any size.
// Feel free to pass in the array size as parameter so you know how many grades you'll
// need to check in your loop.
//
// For example, if you passed the function the following array:
//
// char grades [ ] = {'A', 'b', 'C', 'x', 'D', 'c', 'F', 'B', 'Y', 'B', 'B', 'A'};
//
// It would print:
//
// Grade        Total
// -----        -----
// A            2
// B            4
// C            2
// D            1
// F            1
// I            2
// *******************************************************************

// *******************************************************************
// Function sort_grades
//
// Purpose: This function will sort out and print the number of each
// letter grade passed in an array by the calling function.
//
// Parameters: letter_grades - a char array of any size
//             size - specifies the size of the array letter_grades
//
// Returns: no return
//
// *******************************************************************
void sort_grades(char letter_grades[], int size) {
    int grades[6] = {0}; // Used to store the letter grades total. All array positions are initially set to 0
    int i;
    char letters [6] = {'A', 'B', 'C', 'D', 'F', 'I'};
    
    
    // Cycle through the array to determine how many of each letter grade there is
    for (i = 0; i < size; ++i) {
        
        switch (letter_grades[i]) {
                // If the letter grade is an A
            case 'a':
            case 'A':
                // Increment grades[0] by 1 for A grades
                ++grades [0];
                break;
                
                // If the letter grade is a B
            case 'b':
            case 'B':
                // Increment grades[1] by 1 for B grades
                ++grades [1];
                break;
                
                // If the letter grade is a C
            case 'c':
            case 'C':
                // Increment grades[2] by 1 for C grades
                ++grades [2];
                break;
                
                // If the letter grade is a D
            case 'd':
            case 'D':
                // Increment grades[3] by 1 for D grades
                ++grades [3];
                break;
                
                // If the letter grade is an F
            case 'f':
            case 'F':
                // Increment grades[4] by 1 for F grades
                ++grades [4];
                break;
                
                // If the letter grade is invalid
            default:
                // If a grade is not matched print set it to I in grades[5]
                ++grades[5];
                break;
        }
    }
    
    // Print out the results
    printf("\nGrade\t\tTotal\n");
    printf("-----\t\t-----\n");
    for (i = 0; i < 6; ++i) {
        printf("%c\t\t%i\n", letters[i], grades[i]);
    }
}

// *******************************************************************
// 6) Write a program that contains a main function and three other functions that
// will return various attribute information about an array of floating point
// numbers:
//
// array_sum - total sum of all array elements
// array_avg - average of all array elements
// array_min - the smallest number of the array elements
//
// The main function should print the values returned from each function at the
// end of the program.
// *******************************************************************

#include <stdio.h>
const int NUM_OF_NUMS = 5;

int main (void)
{
    float array_of_numbers[NUM_OF_NUMS] = {201.398, 6890.6567, 100987.74, 2.11, 97890.9}; // Array of numbers to calculate different actions on
    float array_sum (float array[], int size);
    float array_avg (float array[], int size);
    float array_min (float array[], int size);
    
    printf("The sum of the 5 numbers is %.2f.\n", array_sum(array_of_numbers, NUM_OF_NUMS));
    printf("The average of the 5 numbers is %.2f.\n", array_avg(array_of_numbers, NUM_OF_NUMS));
    printf("The smallest of the 5 numbers is %.2f.\n", array_min(array_of_numbers, NUM_OF_NUMS));
    
    return 0;
}

// *******************************************************************
// Function array_sum
//
// Purpose: This function will accept an array of floating point
//          numbers, sum them up, and return the sum to the calling
//          funtion.
//
// Parameters: array - An array of floating point numbers
//             size - number of elements from 0 to calculate
//
// Returns: sum of the array elements
//
// *******************************************************************
float array_sum (float array[], int size)
{
    float sum = 0.0; // Stores the sum of all the numbers
    int i;
    
    // cycles through the array and adds each element to the sum
    for (i = 0; i < size; ++i) {
        sum += array[i];
    }
    
    // returns the sum to the calling funtion
    return sum;
}

// *******************************************************************
// Function array_avg
//
// Purpose: This function will accept an array of floating point
//          numbers, sum them up, divide the sum by the size and
//          return the average to the calling funtion.
//
// Parameters: array - An array of floating point numbers
//             size - number of elements from 0 to calculate
//
// Returns: average of the array elements
//
// *******************************************************************
float array_avg (float array[], int size)
{
    float avg = 0.0; // Stores the average of all the numbers
    
    // Averages the numbers by calling the array_sum function and then dividing by size
    avg = array_sum(array, size) / size;
    
    // Return the average
    return avg;
}

// *******************************************************************
// Function array_min
//
// Purpose: This function will accept an array of floating point
//          numbers, cycle through the array, and return the smallest
//          number to the calling function
//
// Parameters: array - An array of floating point numbers
//             size - number of elements from 0 to calculate
//
// Returns: smallest of the array elements
//
// *******************************************************************
float array_min (float array[], int size)
{
    float min = array[0]; // Stores the smallest number and initialized to the first array position
    int i;
    
    // Cycle through the array to find the smallest number
    for (i = 1; i < size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    
    // Return the smallest number in the array
    return min;
}

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















