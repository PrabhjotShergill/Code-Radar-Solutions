#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int prod=0;
    if(n == 2){
        printf("%d",arr[0]*arr[1]);
        return 0;
    }
    for(int i=0; i<n; i++){
        for(int j=1; j<n-1; j++){
            if(arr[i] * arr[j] > prod){
                prod = arr[i]*arr[j];
            }
        }
    }

    printf("%d", prod);
    return 0;
}