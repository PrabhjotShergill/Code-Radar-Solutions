#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d", &a, &b);
    scanf("%c", &op);
    if(op == '+'){
        printf("%d", a+b);
    }
    else if(op == '-'){
        printf("%d", a-b);
    }
    else if(op == '*'){
        printf("%d", a*b);
    }
    else if(op == '/'){
        if(b == 0){
            printf("Error")
        }
        else{
            printf("%d", a/b);
        }
    }
    return 0;
}