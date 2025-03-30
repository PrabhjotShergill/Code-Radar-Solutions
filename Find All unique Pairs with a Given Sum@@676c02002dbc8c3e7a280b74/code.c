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
    int ele1=0, ele2=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == T){
                if(ele1 == arr[0] && ele2 == arr[1]){
                    return 0;
                }
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}