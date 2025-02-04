#include <stdio.h>
int main() {
    int num, left, result;
    scanf("%d %d", num, left);
    result = num << left;
    printf("%d", result);
    return 0;
}