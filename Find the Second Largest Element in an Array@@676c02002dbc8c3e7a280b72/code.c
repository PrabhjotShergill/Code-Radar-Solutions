#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0], seco_max=INT_MIN;
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            seco_max = max;
            max = arr[i];
        }

        else if(arr[i] > seco_max && arr[i] < max){
            seco_max = arr[i];
        }
    }

    printf("%d", seco_max);
    return 0;
}