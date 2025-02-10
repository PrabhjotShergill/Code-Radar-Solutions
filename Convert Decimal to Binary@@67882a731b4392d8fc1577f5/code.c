#include <stdio.h>
int main() {
    int num;
    int result = 0;
    scanf("%d", &num);
    int temp = num;
    while(temp > 0){
        int digit = temp % 2;
        result = result * 2 + digit;
        temp = temp / 2;
    }
    printf("%d", result);
    return 0;
}