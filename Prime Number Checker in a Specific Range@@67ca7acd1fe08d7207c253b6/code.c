int isPrime(int num){
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int printPrimesInRange(int a, int b){
    int count = 0;
    for(int i=a; i<b; i++){
        if(isPrime(i)){
            printf("%d ", i);
            count++;
        }
    }

    if(count == 0){
        printf("No prime numbers");
    }
}