#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int count = 1;
        int decre = i;
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        for(int j=1; j<=(2*i)-1; j++){
            if(count <= i){
                printf("%d", count);
                count++;
            }
            else{
                printf("%d", decre);
                decre--;
            }
        }
        printf("\n");
    }
    return 0;
}