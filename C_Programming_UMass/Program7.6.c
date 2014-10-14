//----------------------------------------------------
//
// HOMEWORK: fill in the assignment number
//
// Name:
//
// Class: C Programming,
//
// Date:
//
// Description: character array
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
    int i;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    for (i = 0; i < 6; ++i) {
        printf("%c", word[i]);
    }
    
    printf("\n");
    
    
    
    return 0;
}