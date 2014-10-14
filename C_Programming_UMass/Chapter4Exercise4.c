#include <stdio.h>

int main (void)
{
    float degreesFarenheit = 27.0;
    float degreesCelcius;
    
    degreesCelcius = (degreesFarenheit - 32) / 1.8;
    printf("27 degrees farenheit is equal to %f degrees celcius.\n", degreesCelcius);
}