#include <stdio.h>

int main() {
    int num, bit_pos;
    scanf("%d %d", &num, &bit_pos);

    int bit_value = (num >> bit_pos) & 1;
    printf("%d\n", bit_value);

    return 0;
}