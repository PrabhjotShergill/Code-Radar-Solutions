#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    if(n<2){
        printf("-1");
        return 0 ;
    }
    int min1, min2;
    if(arr[0] < arr[1]){
        min1 = arr[0];
        min2 = arr[1];
    }
    else{
        min1 = arr[1];
        min2 = arr[0];
    }

    for(int i=1; i<n; i++){
        if(arr[i] < min1){
            min2 = min1;
            min1 = arr[i];
        }

        else if(arr[i] < min2 && arr[i] > min1){
            min2 = arr[i];
        }
    }

    if(min1 == min2){
        printf("-1");
    }

    else{
        printf("%d", min2);
    }
    return 0;
}