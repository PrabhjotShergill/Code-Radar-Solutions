#include <stdio.h>

char* welcome(a, b) {
    scanf("%f", &a);
    scanf("%f", &b);
    printf("Product: %.2f", a*b);
}

int main() {
    float a;
    float b;
    welcome(a, b);
    return 0;
}