#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int mask = ~(1 << b);
    printf("%d", a&mask);
    return 0;
}