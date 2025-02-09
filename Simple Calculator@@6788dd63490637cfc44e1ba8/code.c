#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    char op;
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