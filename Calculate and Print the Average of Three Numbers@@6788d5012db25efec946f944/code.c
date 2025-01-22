#include <stdio.h>

char* welcome(a, b, c) {
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Average: %.2f", (a+b+c)/3);
}

int main() {
    int a;
    int b;
    int c;
    welcome(a, b, c);
    return 0;
}