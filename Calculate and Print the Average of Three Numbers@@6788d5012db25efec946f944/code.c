#include <stdio.h>

char* welcome(a, b, c) {
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("Average: %.2lf\n", (a+b+c)/3);
}

int main() {
    int a;
    int b;
    int c;
    welcome(a, b, c);
    return 0;
}