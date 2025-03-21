#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int temp[n] = {0};

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            temp[n-1-i] = arr[i];
        }

        else{
            temp[i-1] = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", temp[i]);
    }
    return 0;
}