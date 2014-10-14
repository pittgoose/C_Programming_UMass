// Function to find the minimum value in an array

#include <stdio.h>

int minimum (int values[], int number_of_elements){
    int min_value;
    int i;
    
    min_value = values[0];
    
    for (i = 1; i < number_of_elements; ++i) {
        if (values[i] < min_value) {
            min_value = values[i];
        }
    }
    return min_value;
}

int main (void){
    int array_1[5] = {157, -28, -37, 26, 10};
    int array_2[7] = {12, 45, 1, 10, 5, 3, 22};
    int minimum (int values[], int number_of_elements);
    
    printf("array_1 minimum: %i\n", minimum(array_1, 5));
    printf("array_2 minimum: %i\n", minimum(array_2, 7));
    
    return 0;
    
}