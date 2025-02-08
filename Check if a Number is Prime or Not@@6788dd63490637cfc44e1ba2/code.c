#include <stdio.h>
int main() {
    int a;
    bool flag = 0;
    scanf("%d", &a);    
    for(int i; i<a; i++){
        if(a%i==0){
            pintf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}