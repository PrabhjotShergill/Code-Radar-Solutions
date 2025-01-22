#include <stdio.h>

char* welcome(num) {
    scanf("%c", &num);
    printf("You entered: %c", num);
}

int main() {
    float num;
    welcome(num);
    return 0;
}