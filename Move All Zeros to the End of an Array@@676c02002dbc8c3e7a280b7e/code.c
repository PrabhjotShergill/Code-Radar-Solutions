#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int temp[n];
    int index = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            temp[index++] = arr[i];
        }
    }

    for(int i=index; i<n; i++){
        temp[i] = 0;
    }

    for(int i=0; i<n; i++){
        printf("%d ", temp[i]);
    }
    return 0;
}