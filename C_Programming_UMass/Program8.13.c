// Scalar multiply a two dimentional array

#include <stdio.h>

int main (void){
    void scalarMultiply(int matrix[3][5], int scalar);
    void displayMatrix(int matrix[3][5]);
    int sample_matrix[3][5] =
    {
        {7, 16, 55, 13, 12},
        {12, 10, 52, 0, 7},
        {-2, 1, 2, 4, 9}
    };
    
    printf("Original matrix:\n");
    displayMatrix(sample_matrix);
    
    scalarMultiply(sample_matrix, 2);
    
    printf("\nMultiplied by 2:\n");
    displayMatrix(sample_matrix);
    
    scalarMultiply(sample_matrix, -1);
    
    printf("\nMultiplied by -1:\n");
    displayMatrix(sample_matrix);
    
    return 0;
}

// Function to multiply a 3 x 5 array by a scalar

void scalarMultiply(int matrix[3][5], int scalar){
    int row;
    int column;
    
    for (row = 0; row < 3; ++row) {
        for (column = 0; column < 5; ++column) {
            matrix[row][column] *= scalar;
        }
    }
}

// Function to print a 3 x 5 array to the screen

void displayMatrix(int matrix[3][5]){
    int row;
    int column;
    
    for (row = 0; row < 3; ++row) {
        for (column = 0; column < 5; ++column) {
            printf("%5i", matrix[row][column]);
        }
        printf("\n");
    }
}