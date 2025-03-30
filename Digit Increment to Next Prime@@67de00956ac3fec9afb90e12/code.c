#include <stdio.h>

int nextPrimeDigit(int digit) {
    // Mapping of digits to their next prime equivalent
    int primeDigits[] = {2, 2, 3, 5, 7, 2, 3, 5, 2, 2};
    return primeDigits[digit];
}

int incrementToPrimeDigits(int N) {
    int result = 0, place = 1;
    
    while (N > 0) {
        int digit = N % 10; // Extract last digit
        result = nextPrimeDigit(digit) * place + result; // Update result
        place *= 10;
        N /= 10;
    }
    
    return result;
}

