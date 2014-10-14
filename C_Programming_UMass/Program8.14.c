// Program to convert a positive integer to another base

#include <stdio.h>

int converted_number[64];
long int number_to_convert;
int base;
int digit = 0;

void getNumberAndBase(void){
    printf("Number to be converted? ");
    scanf("%li", &number_to_convert);
    
    printf("Base? ");
    scanf("%i", &base);
    
    if (base < 2 || base > 16) {
        printf("Bad base - base must be between 2 and 16!\n");
        base = 10;
    }
}

void convertNumber(void){
    do {
        converted_number[digit] = number_to_convert % base;
        ++digit;
        number_to_convert /= base;
    } while (number_to_convert != 0);
}

void displayConvertedNumber(void){
    const char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int next_digit;
    
    printf("Converted number = ");
    
    for (--digit; digit >= 0; --digit) {
        next_digit = converted_number[digit];
        printf("%c", base_digits[next_digit]);
    }
    printf("\n");
}

int main (void){
    void getNumberAndBase(void);
    void convertNumber(void);
    void displayConvertedNumber(void);
    int keep_going = 1;
    
    while (keep_going !=-1) {
        getNumberAndBase();
        convertNumber();
        displayConvertedNumber();
        printf("Keep going? Enter any number to continue or -1 to end:");
        scanf("%i", &keep_going);
        printf("\n");
    }
    
    
    return 0;
}