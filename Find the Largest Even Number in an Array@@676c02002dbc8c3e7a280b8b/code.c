#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int even_max = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]%2==0 && arr[i]>even_max){
            even_max = arr[i];
        }
    }
    if(even_max%2==0){
        printf("%d", even_max);
    }
    else{
        printf("-1");
    }
    return 0;
}