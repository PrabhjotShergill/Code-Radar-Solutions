#include <stdio.h>
int main() {
    int num, right, ans;
    scanf("%d", &num, &right);
    ans = num >> right;
    printf("%d", ans);
    return 0;
}