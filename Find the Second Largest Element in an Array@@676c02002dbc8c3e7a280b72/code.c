#include<stdio.h>

int search(int arr, int max, int n){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans = 0;
    while(s<e){
        if(arr[mid] > max){
            s=mid+1;
            ans=arr[mid];
        }

        else if(arr[mid] < max){
            e=mid-1;
        }

        else{
            e=mid-1;
        }   

        mid = s+(e-s)/2;
    }

    printf("%d", ans);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    search(arr[], max, n);
    return 0;
}