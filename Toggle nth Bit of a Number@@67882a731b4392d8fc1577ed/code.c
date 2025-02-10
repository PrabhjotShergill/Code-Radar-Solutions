#include <stdio.h>
int main() {
    int num, bit_pos;
    scanf("%d %d", &num, &bit_pos);
    int mask = (1<<bit_pos);
    printf("%d", num^mask);
    return 0;
}