// Program to determine tomorrows date (including leap years)

#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};

int main (void) {
    struct date today;
    struct date tomorrow;
    int number_of_days (struct date d);
    
    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);
    
    if (today.day != number_of_days(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12) { //end of the year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else { // End of month
        tomorrow.day = 1;
        tomorrow.month = today.month +1;
        tomorrow.year = today.year;
    }
    
    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
    
    return 0;
}

// function to find the number of days in a month

int number_of_days(struct date d){
    int days;
    bool is_leap_year(struct date d);
    const int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (is_leap_year(d) == true && d.month == 2) {
        days = 29;
    }
    else {
        days = days_per_month[d.month - 1];
    }
    return days;
}

// Function to determine if it's a leap year

bool is_leap_year (struct date d){
    bool leap_year_flag;
    
    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
        leap_year_flag = true;
    }
    else {
        leap_year_flag = false;
    }
    return leap_year_flag;
}
