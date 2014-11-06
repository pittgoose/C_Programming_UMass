// *******************************************************************
//1)  Write a macro for each of the following:
//
//a) Area of a Circle
//b) Area of a Square
//c) Area of a Rectangle
//d) Area of a Triangle
//
//You can find formulas and detailed explanations at:  http://www.mathisfun.com
// *******************************************************************

#define PI 3.14159
#define AREA_OF_CIRCLE(radius) (PI * radius * radius)
#define AREA_OF_SQUARE(side) (side * side)
#define AREA_OF_RECTANGLE(width,height) (width * height)
#define AREA_OF_TRIANGLE(base,height) (.5 * base * height)

//--------------------------------------------------------------------------------------------------------------------------------------------

// *******************************************************************
//2)  Write a function which will determine how many words are in a given string.  You can assume that one or more
//consecutive white spaces is a delimiter between words, and that the string you pass to your function is null terminated.
// *******************************************************************

#include <stdio.h>
#include <stdbool.h>

// *******************************************************************
// FUNCTION:  total_words
//
// DESCRIPTION: This function will return the number of words in a
//              give string as an integer.
//
// PARAMETERS:  string - an array of characters (string)
//
// OUTPUTS:     int - number of words in the string
//
// CALLS:       is_alphabetic
// *******************************************************************
int total_words (char string[])
{
    int i; // increments the loop
    int words = 0; // Used to store the number of words in the string
    bool looking_for_word = true; // tells if you are still looking for a word or if you've found it
    bool is_alphabetic (const char c); // determines if the letter is alphabetic (function included below)
    
    // loops through each letter of the string and adds to word count if a space is encountered
    for (i = 0; string[i] != '\0'; ++i) {
        if (is_alphabetic(string[i])) {
            if (looking_for_word) {
                ++words;
                looking_for_word = false;
            }
        }
        else
        {
            looking_for_word = true;
        }
    }
    
    // Returns the number of words
    return words;
}

// *******************************************************************
// FUNCTION:    is_alphabetic
//
// DESCRIPTION: This function will take a character and return true if
//              it is alphabetic and false if not.
//
// PARAMETERS:  c - a single character
//
// OUTPUTS:     bool - true or false
//
// CALLS:       none
// *******************************************************************
bool is_alphabetic (const char c)
{
    // check if the character is alphabetic
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    else {
        return false;
    }
}

//--------------------------------------------------------------------------------------------------------------------------------------------

// *******************************************************************
// 3)  Write a function that is passed a month, day, and year and will determine if
// that date is valid.   You can assume each parameter is passed in as an integer.
// Remember to check for leap year!
//
// validDate (5, 31, 1961)    .... would be valid
//
// validDate (13, 4, 1967)    ... would be invalid, the month is invalid
// *******************************************************************

// *******************************************************************
// FUNCTION:    valid_date
//
// DESCRIPTION: This function will take a date in three integer values
//              and return true or false if it is a valid date or not.
//
// PARAMETERS:  month - the month
//              day - the day
//              year - the year
//
// OUTPUTS:     bool - true or false
//
// CALLS:       number_days - gets the number of days in the month,
//                            depending on the month and year.
// *******************************************************************
bool valid_date (int month, int day, int year)
{
    int number_days (int month, int year);
    
    // Check if the month is a valid month
    if (month < 1 || month > 12) {
        return false;
    }
    
    // check if the day is a valid day
    if (day < 1 || day > number_days(month, year)) {
        return false;
    }
    
    // check if the year is a positive number
    if (year < 0) {
        return false;
    }
    
    // If the date is valid
    return true;
}

// *******************************************************************
// FUNCTION:    number_days
//
// DESCRIPTION: This function will take a month and year and return
//              the number of days in that month.
//
// PARAMETERS:  month - the month
//              year - the year
//
// OUTPUTS:     int - number of days in the month
//
// CALLS:       is_leap_year
// *******************************************************************
int number_days (int month, int year){
    bool is_leap_year (int year);
    
    // an array with the number of days in each month in a regular year
    const int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (is_leap_year(year) && month == 2) {
        // if it's a leapyear and the user is requesting the days in feb
        return 29;
    }
    else {
        // if it's not a leap year
        return days_per_month[month - 1];
    }
}

// *******************************************************************
// FUNCTION:    is_leap_year
//
// DESCRIPTION: This function will take a year and determine if it is
//              a leap year.
//
// PARAMETERS:  year - the year
//
// OUTPUTS:     bool - true or false
//
// CALLS:       none
// *******************************************************************
bool is_leap_year (int year) {
    bool leap_year_flag;
    // check if the year passed is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

//--------------------------------------------------------------------------------------------------------------------------------------------













