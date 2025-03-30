#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max, seco_max;
    if(arr[0] > arr[1]){
        max = arr[0];
        seco_max = arr[1];
    }

    else{
        max = arr[1];
        seco_max = arr[0];        
    }
    for(int i=2; i<n; i++){
        if(arr[i] > max){
            seco_max = max;
            max = arr[i];
        }

        else if(arr[i] > seco_max && arr[i] < max){
            seco_max = arr[i];
        }
    }
    if(seco_max < 0){
        printf("-20");
    }
    else if(max == seco_max){
        printf("-1");
    }

    else{
        printf("%d", seco_max);
    }
    
    return 0;
}