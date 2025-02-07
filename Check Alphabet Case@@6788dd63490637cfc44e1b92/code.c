#include <stdio.h>
#include<ctype.h>
int main() {
    char c;
    if(islower(c)){
        printf("Lowercase");
    }
    else if(isupper(c)){
        printf("Uppercase");
    }
    return 0;
}