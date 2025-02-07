#include <stdio.h>
#include<ctype.h>
int main() {
    char c;
    scanf("%c", &c);
    if(islower(c)){
        printf("Lowercase");
    }
    else if(isupper(c)){
        printf("Uppercase");
    }
    return 0;
}