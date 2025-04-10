#include<stdio.h>

int function(int n){
    int ans=0;
    while(n!=0){
        ans = ans*10 + n%10;
        n /= 10;
    }

    return n;
}
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int count=0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(function(arr[i]) == arr[i]){
            count++;
        }
    }

    printf("%d", count);
    return 0;
}