#include <stdio.h>

char* welcome(a, b, c) {
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    result = (a+b+c)/3;
    printf("Average: %.2lf", result);
}

int main() {
    double a, b, c, result;
    welcome(a, b, c);
    return 0;
}