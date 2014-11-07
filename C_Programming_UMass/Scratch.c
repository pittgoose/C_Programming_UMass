#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// *******************************************************************
//7)  Write a function that will return in a structure the following characteristics of a given string:
//
//1) string length (use strlen),
//2) number of upper case characters
//3) number of lower case characters,
//4) number of digits
//5) number of non-alphanumeric characters.
// *******************************************************************

struct stats{
    int str_length;
    int upper_case;
    int lower_case;
    int digits;
    int non_alphanumeric;
};

struct stats string_data (char *str_ptr)
{
    struct stats string_stats; // declare the struct
    
    while (*str_ptr) {
        // increment the length of the string for each pass
        string_stats.str_length++;
        
        // if the character is an upper case letter
        if (*str_ptr >= 'A' && *str_ptr <= 'Z') {
            string_stats.upper_case++;
        }
        // if the character is a lower case letter
        else if (*str_ptr >= 'a' && *str_ptr <= 'z') {
            string_stats.lower_case++;
        }
        // if the character is a digit
        else if (*str_ptr >= '0' && *str_ptr <= 9) {
            string_stats.digits++;
        }
        // if the character is none of the above
        
        // TODO figure this part out
        else {
            string_stats.non_alphanumeric++;
        }
        
        ++str_ptr;
    }// end while
    return string_stats;
}



int main (void)
{
    char string[25] = "rtyuDFGH4567";
    char *str_ptr = &string[0];
    struct stats statistics;
    
    
    statistics = string_data(str_ptr);
    
    printf("length = %i\nupper = %i\nlower = %i\ndigits = %i\nnon alphanumeric = %i\n\n", statistics.str_length, statistics.upper_case, statistics.lower_case, statistics.digits, statistics.non_alphanumeric);
    
}
















