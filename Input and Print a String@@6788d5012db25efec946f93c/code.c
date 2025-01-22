#include <stdio.h>

char* welcome(str) {
    scanf("%s", &str);
    printf("You entered: %s", str);
}

int main() {
    char str[100];
    welcome(str);
    return 0;
}