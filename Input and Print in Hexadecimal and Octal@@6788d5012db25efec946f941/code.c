#include <stdio.h>

char* welcome(num) {
    scanf("%d", &num);
    printf("Hexadecimal: %X", num);
    printf("Octal: %o", num);
}

int main() {
    int num;
    welcome(num);
    return 0;
}