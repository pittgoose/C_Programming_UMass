// *******************************************************************
// 3)  Write a function that is passed a month, day, and year and will determine if
// that date is valid.   You can assume each parameter is passed in as an integer.
// Remember to check for leap year!
//
// validDate (5, 31, 1961)    .... would be valid
//
// validDate (13, 4, 1967)    ... would be invalid, the month is invalid
// *******************************************************************

#include <stdbool.h>
#include <stdio.h>

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
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1 || day > number_days(month, year)) {
        return false;
    }
    if (year < 0) {
        return false;
    }
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
    int days;
    bool is_leap_year (int year);
    const int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (is_leap_year(year) && month == 2) {
        days = 29;
    }
    else {
        days = days_per_month[month - 1];
    }
    return days;
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
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        leap_year_flag = true;
    }
    else {
        leap_year_flag = false;
    }
    return leap_year_flag;
}










