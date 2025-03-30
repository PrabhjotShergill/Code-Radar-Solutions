#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int T;
    scanf("%d", &T);

    for(int i=0; i<n; i++){
        for(int j=1; j<n-1; j++){
            if(arr[i] + arr[j] == T){
                printf("%d %d\n", arr[0], arr[1]);
            }
        }
    }
    return 0;
}