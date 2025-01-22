#include <stdio.h>

char* welcome(num) {
    scanf("%d", &num);
    printf("You entered: %d", num);
}

int main() {
    int num;
    welcome(num);
    return 0;
}