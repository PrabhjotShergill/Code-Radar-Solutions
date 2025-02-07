#include <stdio.h>
int main() {
    int cost_price, sell_price;
    scanf("%d %d", &cost_price, &sell_price);
    if(cost_price < sell_price){
        printf("Profit");
    }
    else{
        printf("Loss");
    }    
    return 0;
}