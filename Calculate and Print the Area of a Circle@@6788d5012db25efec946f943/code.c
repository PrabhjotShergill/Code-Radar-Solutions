#include <stdio.h>

char* welcome(r) {
    float area;
    scanf("%f", r);
    area = 3.14*r*r;
    printf("Area: %.2f", area);
}
int main() {
    float r;
    welcome(r);
    return 0;
}