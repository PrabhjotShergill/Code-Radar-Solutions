#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i=0; i<n; i++){
        int j = i+1;
        if(arr[i] > arr[j]){
            cout << "Not Sorted";
            return 0;
        }
    }

    cout << "Sorted";
    return 0;
}