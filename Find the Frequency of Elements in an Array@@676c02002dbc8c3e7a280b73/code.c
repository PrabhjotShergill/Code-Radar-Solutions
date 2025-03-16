#include<stdio.h>
#include<algorithm>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    //sort
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}