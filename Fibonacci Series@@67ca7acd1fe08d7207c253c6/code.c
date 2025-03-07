#include<stdio.h>

void fibonacciSeries(int n){
    int t1 = 0;
    int t2 = 1;
    int next;

    for(int i=1; i<=n; i++){
        if(i==1){
            printf("%d ", t1);
        }
        else if(i==2){
            printf("%d ", t2);
        }

        else{
            next = t1+t2;
            printf("%d ", next);
            t1 = t2;
            t2 = next;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    if(n <= 0){
        printf("Invalid input\n");
        return 0;
    }

    fibonacciSeries(n);
    return 0;
}