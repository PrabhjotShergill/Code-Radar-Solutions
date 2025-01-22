#include <stdio.h>

char* welcome(ch) {
    scanf("%c", &ch);
    printf("ASCII Value: %d", ch);
}

int main() {
    char ch;
    welcome(ch);
    return 0;
}