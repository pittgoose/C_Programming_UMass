// writing a funtion to compare two strings

#include <stdio.h>
#include <stdbool.h>

bool equal_strings (const char s1[], const char s2[])
{
    int i = 0;
    bool are_equal;
    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }
    
    if (s1[i] == '\0' && s2[i] == '\0') { // alternatively if (s1[i] == s2[i]) because it only reaches the end of the loop if each character is equal
        are_equal = true;
    }
    else {
        are_equal = false;
    }
    return are_equal;
}

int main (void)
{
    bool equal_strings (const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";
    
    printf("%i\n", equal_strings(stra, strb));
    printf("%i\n", equal_strings(stra, stra));
    printf("%i\n", equal_strings(strb, "string"));
    
    return 0;
}