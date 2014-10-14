// Function to find the minimum value in an array

#include <stdio.h>

int minimum (int values[10]){
    int min_value;
    int i;
    
    min_value = values[0];
    
    for (i = 1; i < 10; ++i) {
        if (values[i] < min_value) {
            min_value = values[i];
        }
    }
    return min_value;
}

int main (void){
    int scores[10];
    int i;
    int min_score;
    int minimum(int values[10]);
    
    printf("Enter 10 scores\n");
    
    for (i = 0; i < 10; ++i) {
        scanf("%i", &scores[i]);
    }
    
    min_score = minimum(scores);
    printf("\nMinimum score is: %i\n", min_score);
    
    return 0;
    
}