#include <stdio.h>
int main() {
    int age, citizen;
    scanf("%d %d", &age, &citizen);
    if(age>=18){
        if(citizen == 1){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}