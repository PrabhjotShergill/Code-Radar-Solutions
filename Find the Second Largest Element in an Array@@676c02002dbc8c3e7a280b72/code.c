#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("%d", arr[n-2]);

    return 0;
}