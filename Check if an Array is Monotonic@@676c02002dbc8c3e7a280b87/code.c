#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int In_count=0;
    int De_count=0;
    for(int i=0; i<n-1; i++){
        if(arr[i] <= arr[i+1]){
            In_count++;
        }

        else{
            break;
        }
    }


        for(int i=0; i<n-1; i++){
        if(arr[i] >= arr[i+1]){
            De_count++;
        }

        else{
            break;
        }
    }


    if(In_count==n-1 || De_count==n-1){
        printf("YES");
    }

    else{
        printf("NO");
    }
    return 0;
}