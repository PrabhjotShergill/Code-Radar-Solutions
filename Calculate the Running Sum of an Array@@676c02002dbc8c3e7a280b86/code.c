#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int temp[n];
    int sum=arr[0];

    temp[0] = arr[0];

    for(int i=1; i<n; i++){
        sum += arr[i];
        temp[i] = sum;
    }


    for(int i=0; i<n; i++){
        printf("%d ", temp[i]);
    }
    return 0;
}