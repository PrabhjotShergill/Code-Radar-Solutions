#include <stdio.h>

int nextPrimeDigit(int digit) {
    // Mapping of digits to their next prime equivalent
    int primeDigits[10] = {2, 2, 3, 5, 5, 7, 7, 2, 2, 2};
    return primeDigits[digit];
}

int incrementToPrimeDigits(int N) {
    if(N == 0){
        return 2;
    }
    int result = 0, place = 1;
    while (N > 0) {
        int digit = N % 10; // Extract last digit
        result = nextPrimeDigit(digit) * place + result; // Update result
        place *= 10;
        N /= 10;
    }

    return result;
}

