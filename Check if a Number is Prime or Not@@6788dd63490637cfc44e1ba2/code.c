#include <stdio.h>
int main() {
    int a;
    bool flag = 0;
    scanf("%d", &a);
    if(a<0){
        printf("Not Prime");
    }
    else{    
        for(int i=2; i<a-1; i++){
            if(a%i==0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}