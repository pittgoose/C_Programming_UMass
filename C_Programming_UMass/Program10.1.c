// Funciton to concatenate two character arrays

#include <stdio.h>

void concat (char result[], const char string1[], int n1, const char string2[], int n2)
{
    int i;
    int j;
    
    // copy string1 to result
    for (i = 0; i < n1; ++i) {
        result[i] = string1[i];
    }
    
    // copy string2 to result
    for (j = 0; j < n2; ++j) {
        result[n1 + j] = string2[j];
    }
    
}

int main (void)
{
    void concat (char result[], const char string1[], int n1, const char string2[], int n2);
    
    const char s1[5] = {'T', 'e', 's', 't', ' '};
    const char s2[6] = {'w', 'o', 'r', 'k', 's', '.'};
    char s3[11];
    int i;
    
    concat(s3, s1, 5, s2, 6);
    
    for (i = 0; i < 11; ++i) {
        printf("%c", s3[i]);
    }
    
    printf("\n");
}