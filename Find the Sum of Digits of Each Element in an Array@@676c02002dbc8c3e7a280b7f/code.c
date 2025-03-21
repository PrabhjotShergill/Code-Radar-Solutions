#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        int sum=0;
        // int num = abs(arr[i]);
        int num = arr[i];
        if(num < 0){
            num = -num;
        }
        while(num != 0){
            int digit = num%10;
            sum += digit;
            num /= 10;
        }
        arr[i] = sum;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}