#include <stdio.h>

char* welcome(num) {
    scanf("%f", &num);
    printf("You entered: %f", num);
}

int main() {
    float num;
    welcome(num);
    return 0;
}