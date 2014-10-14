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
// Description: short description of the program
//
//----------------------------------------------------

#include <stdio.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int i;
    int rating_counters[11];
    int response;
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    for (i = 1; i <= 10; ++i) {
        rating_counters[i] = 0;
    }
    
    printf("Enter your responses\n");
    
    for (i = 1; i <= 20; ++i) {
        scanf("%i", &response);
        
        if (response < 1 || response > 10) {
            printf("Bad response: %i\n", response);
        }
        else {
            ++ rating_counters[response];
        }
    }
    
    printf("\n\nRating\tNumber of Responses\n");
    printf("------\t-------------------\n");
    
    for (i = 1; i <= 10; ++i) {
        printf("%4i%14i\n", i, rating_counters[i]);
    }
    
    return 0;
}