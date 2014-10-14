// Scalar multiply a two dimentional array (variable length arrays)

#include <stdio.h>

int main (void){
    void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar);
    void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
    int sample_matrix[3][6] =
    {
        {7, 16, 55, 13, 12, 4},
        {12, 10, 52, 0, 7, 77},
        {-2, 1, 2, 4, 9, 63}
    };
    
    printf("Original matrix:\n");
    displayMatrix(3, 6, sample_matrix);
    
    scalarMultiply(3, 6, sample_matrix, 2);
    
    printf("\nMultiplied by 2:\n");
    displayMatrix(3, 6, sample_matrix);
    
    scalarMultiply(3, 6, sample_matrix, -1);
    
    printf("\nMultiplied by -1:\n");
    displayMatrix(3, 6, sample_matrix);
    
    return 0;
}

// Function to multiply a 3 x 5 array by a scalar

void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar){
    int row;
    int column;
    
    for (row = 0; row < nRows; ++row) {
        for (column = 0; column < nCols; ++column) {
            matrix[row][column] *= scalar;
        }
    }
}

// Function to print a 3 x 5 array to the screen

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]){
    int row;
    int column;
    
    for (row = 0; row < nRows; ++row) {
        for (column = 0; column < nCols; ++column) {
            printf("%5i", matrix[row][column]);
        }
        printf("\n");
    }
}