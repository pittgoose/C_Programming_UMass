// function to do double each element in an array

#include <stdio.h>

void multiplyByTwo (float array[], int n){
    int i;
    
    for (i = 0; i < n; ++i) {
        array[i] *= 2;
    }
}

int main (void){
    float float_vals[4] = {1.2f, -3.7f, 6.2f, 8.55f};
    int i;
    void multiplyByTwo (float array[], int n);
    
    multiplyByTwo(float_vals, 4);
    
    for (i = 0; i < 4; ++i) {
        printf("%.2f\t", float_vals[i]);
        
    }
    printf("\n");
    
    return 0;
}