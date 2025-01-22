#include <stdio.h>

char* welcome(r) {
    scanf("%f", r);
    area = 3.14*r*r;
    printf("Area: %.2f", area);
}
int main() {
    float r;
    float area;
    welcome(r);
    return 0;
}