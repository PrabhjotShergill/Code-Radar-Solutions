#include<stdio.h>

int isPrime(int num){
    for(int i=2; i*i<=n; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    scanf("%d", &n);
    int count = 1;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int j=0; j<n; j++){
        if(isPrime(j)){
            count++;
        }
    }

    printf("%d", count);
    return 0;
}