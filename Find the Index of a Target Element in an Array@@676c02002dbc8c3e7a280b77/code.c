#include<stdio.h>

int findTarget(int arr[], int target, int n){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] < target){
            s = mid+1;
        }

        else{
            e = mid-1;
        }
    }

    return -1; 
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    int target;
    scanf("%d", &target);
    printf("%d", findTarget(arr, target, n));
    return 0;
}