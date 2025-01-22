#include <stdio.h>

char* welcome(n) {
    scanf("%d", n);
    printf("You entered: %f", n);
}

int main() {
    float n;
    welcome(n);
    return 0;
}