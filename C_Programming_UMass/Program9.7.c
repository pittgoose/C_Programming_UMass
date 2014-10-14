// Program to illustrate structures and arrays

#include <stdio.h>

int main (void) {
    int i;
    struct month {
        int number_of_days;
        char name[3];
    };
    
    const struct month months[12] =
    {
        {31, {'J', 'a', 'n'}}, {28, {'F', 'e', 'b'}},
        {31, {'M', 'a', 'r'}}, {30, {'A', 'p', 'r'}},
        {31, {'M', 'a', 'y'}}, {30, {'J', 'u', 'n'}},
        {31, {'J', 'u', 'l'}}, {31, {'A', 'u', 'g'}},
        {30, {'S', 'e', 'p'}}, {31, {'O', 'c', 't'}},
        {30, {'N', 'o', 'v'}}, {31, {'D', 'e', 'c'}}
    };
    
    printf("Month\tNumber of Days\n");
    printf("-----\t--------------\n");
    
    for (i = 0; i < 12; ++i) {
        printf("%c%c%c\t\t%i\n", months[i].name[0], months[i].name[1], months[i].name[2], months[i].number_of_days);
    }
    
    return 0;
}