#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a<=1){
        printf("Not Prime");
        return 0;
    }    
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            pintf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}