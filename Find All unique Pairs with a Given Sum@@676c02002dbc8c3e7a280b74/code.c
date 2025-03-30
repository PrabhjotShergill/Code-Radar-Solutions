#include<stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int T;
    scanf("%d", &T);

    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[i] + arr[j] == T){
                printf("%d %d\n", arr[0], arr[1]);
            }
        }
    }
    return 0;
}