#include <stdio.h>
int main() {
    int num;
    int result = 0;
    scanf("%d", &num);
    int temp = num;
    while(temp > 0){
        int digit = temp % 2;
        result = result * 10 + digit;
        temp = temp / 10;
    }
    printf("%d", result);
    return 0;
}