// Function to display the nth triangular number

#include <stdio.h>

void calculateTriangularNumber (int n){
    int i;
    int triangular_number = 0;
    
    for (i = 1; i <= n; ++i) {
        triangular_number += i;
    }
    
    printf("Triangular number %i is %i\n", n, triangular_number);
}

int main (void){
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);
    
    return 0;
}