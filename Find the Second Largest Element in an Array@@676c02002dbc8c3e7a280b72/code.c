#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max = -1, seco_max=-1;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        else if(arr[i] > seco_max && arr[i] < max){
            seco_max = arr[i];
        }
    }
    return 0;
}