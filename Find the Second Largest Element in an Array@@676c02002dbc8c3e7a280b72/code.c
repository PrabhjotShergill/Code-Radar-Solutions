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

    int all_same = 1;
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            seco_max = max;
            max = arr[i];
            all_same = 0;
        }

        else if(arr[i] > seco_max && arr[i] < max){
            seco_max = arr[i];
            all_same = 0;
        }
    }
    if(all_same){
        printf("-1");
    }

    else{
        printf("%d", seco_max);
    }
    
    return 0;
}