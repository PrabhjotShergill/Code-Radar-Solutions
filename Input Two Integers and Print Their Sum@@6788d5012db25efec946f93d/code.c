#include <stdio.h>

char* welcome(a, b) {
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Sum: %d", a+b);
}

int main() {
    int a;
    int b;
    welcome(a, b);
    return 0;
}