#include <stdio.h>
int main() {
    int a, b, op;
    scanf("%d %d %d", &a, &b, &op);
    switch(op){
        case +:
            printf("%d", a+b);
        case -:
            printf("%d", a-b);
        case *:
            printf("%d", a*b);
        case /:
            printf("%d", a/b);
    }
    return 0;
}