#include <stdio.h>

int main (void)
{
    double x = 2.55;
    double result = 3 * (x * x * x) - 5 * (x * x) + 6;
    
    printf("The result of 3x^3 - 5x^2 + 6 is %e\n", result);
}