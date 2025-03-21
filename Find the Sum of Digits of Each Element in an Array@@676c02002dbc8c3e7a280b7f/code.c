#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        while(arr[i] > 0){
            int sum=0;
            int digit = arr[i]%10;
            sum += digit;
            arr[i] /= 10;
        }
        arr[i] = sum;
    }

    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}