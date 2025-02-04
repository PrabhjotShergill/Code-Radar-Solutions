#include <stdio.h>
int main() {
    int num, right;
    scanf("%d %d", &num, &right);
    num = num >> right;
    printf("%d", num);
    return 0;
}