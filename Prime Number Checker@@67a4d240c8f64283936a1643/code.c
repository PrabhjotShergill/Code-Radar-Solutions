#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n){
    for(int i=2; i*i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

// int main(){
//     int t;
//     scanf("%d", &t);
//     while(t--){
//         int num;
//         scanf("%d", &num);
//         printf("%d\n", isPrime(num));
//     }
//     return 0;
// }