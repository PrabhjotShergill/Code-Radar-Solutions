#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32]; 
    int index = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[index++] = num & 1; 
        num = num >> 1;            
    }

    for (int i = index  - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);
    printf("\n");
    return 0;
}