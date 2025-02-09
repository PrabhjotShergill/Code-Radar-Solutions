#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d", &a, &b);
    scanf("%c", &op);
    switch(op){
        case '+':
            printf("%d", a+b);
        case '-':
            printf("%d", a-b);
        case '*':
            printf("%d", a*b);
        case '/':
            printf("%d", a/b);
    }
    return 0;
}