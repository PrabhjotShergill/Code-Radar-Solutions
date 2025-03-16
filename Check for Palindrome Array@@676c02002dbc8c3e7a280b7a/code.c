#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }
    int s=0, e=n-1;
    while(s<=e){
        if(arr[s] == arr[e]){
            s++;
            e--;
        }
        else{
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}