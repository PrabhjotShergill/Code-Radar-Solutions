#include <stdio.h>
int main() {
    int num, left;
    scanf("%d %d", &num, &left);
   num = num << left;
    printf("%d", num);
    return 0;
}