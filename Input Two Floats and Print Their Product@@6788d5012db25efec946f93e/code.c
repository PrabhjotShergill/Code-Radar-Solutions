#include <stdio.h>

char* welcome(a, b) {
    scanf("%f", &a);
    scanf("%f", &b);
    result = a*b;
    printf("Product: %.2f", result);
}

int main() {
    float a;
    float b;
    float result;
    welcome(a, b);
    return 0;
}