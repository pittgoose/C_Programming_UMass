//----------------------------------------------------
//
// HOMEWORK: fill in the assignment number
//
// Name:
//
// Class: C Programming,
//
// Date:
//
// Description: prime numbers in an array
//
//----------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    //-*-*-*-*-Variable Declarations-*-*-*-*-
    int i;
    bool is_prime;
    int p;
    int prime_index = 2;
    int primes[50];
    
    
    //-*-*-*-*-Begin creating the nuts and bolts-*-*-*-*-
    primes[0] = 2;
    primes[1] = 3;
    
    for (p = 5; p <= 50; p = p + 2) {
        is_prime = true;
        
        for (i = 1; is_prime && p / primes[i] >= primes[i]; ++i) {
            if (p % primes[i] == 0) {
                is_prime = false;
            }
        }
        if (is_prime) {
            primes[prime_index] = p;
            ++prime_index;
        }
    }
    for (i = 0; i < prime_index; ++i) {
        printf("%i ", primes[i]);
    }
    printf("\n");
    
    
    return 0;
}