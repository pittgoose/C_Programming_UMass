#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>





int main (void)
{
    char string[25] = "rtyuDFGH4567";
    char *str_ptr = &string[0];
    struct stats statistics = {0,0,0,0,0};
    
    
    statistics = string_data(str_ptr);
    
    printf("length = %i\nupper = %i\nlower = %i\ndigits = %i\nnon alphanumeric = %i\n\n", statistics.str_length, statistics.upper_case, statistics.lower_case, statistics.digits, statistics.non_alphanumeric);
    
}
















