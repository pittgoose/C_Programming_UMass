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

// Function to determine if it's a leap year
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







int main (void)
{
    printf("%i\n", valid_date(2, 29, 2004));
}
















