// Converting a string to its integer equivalent

#include <stdio.h>
// Function to convert a string to an integer

int str_to_int (const char string[])
{
    int i;
    int int_value;
    int result = 0;
    
    for (i = 0; string[i] >= '0' && string[i] <= '9'; ++i) {
        int_value = string[i] - '0';
        result = result * 10 + int_value;
    }
    
    return result;
}

int main (void)
{
    int str_to_int (const char string[]);
    
    printf("%i\n", str_to_int("245"));
    printf("%i\n", str_to_int("100") + 25);
    printf("%i\n", str_to_int("13x5"));
    
    return 0;
}