#include <stdio.h>
int main() {
    int temp_cel;
    scanf("%d", temp_cel);
    if(temp_cel <= 0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}