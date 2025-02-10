#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        for(int j=1; j<=i; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}