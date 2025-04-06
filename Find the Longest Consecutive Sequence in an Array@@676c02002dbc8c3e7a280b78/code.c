#include<stdio.h>

int sortArr(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int temp = arr[i];
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int count = 1;
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1] + 1){
            count++;
        }
    }


    printf("%d", count);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sortArr(arr, n);
    return 0;
}