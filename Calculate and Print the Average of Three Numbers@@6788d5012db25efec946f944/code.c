#include <stdio.h>

char* welcome(a, b, c) {
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("Average: %.2lf", (a+b+c)/3);
}

int main() {
    double a;
    double b;
    double c;

    welcome(a, b, c);
    return 0;
}