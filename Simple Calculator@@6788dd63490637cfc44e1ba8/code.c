#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Read two integers
    scanf("%d %d", &a, &b);

    // Consume the newline character left in the buffer
    getchar();  

    // Read the operator
    scanf("%c", &op);

    // Perform the calculation based on the operator
    if (op == '+') {
        printf("%d", a + b);
    } else if (op == '-') {
        printf("%d", a - b);
    } else if (op == '*') {
        printf("%d", a * b);
    } else if (op == '/') {
        if (b == 0) {
            printf("Error");
        } else {
            printf("%d", a / b);
        }
    } else {
        printf("Invalid operator");
    }

    return 0;
}
