#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for(int i=0; i<n; i++){
        if(i==0){
            if(arr[i] > arr[i+1]){
                printf("%d", arr[i]);
                flag = 1;
                break;
            }
        }

        else if(i==n-1){
            if(arr[i] > arr[i-1]){
                printf("%d", arr[i]);
                flag = 1;
                break;
            }
        }

        else{
            if((arr[i] > arr[i-1]) && arr[i] > arr[i+1]){
                printf("%d", arr[i]);
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0){
        printf("-1");
    }
    return 0;
}