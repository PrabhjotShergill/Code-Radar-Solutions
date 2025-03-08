void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(char arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int printArray(char arr[], int n){
    for(int i=0; i<n; i++){
        printf("%c ", arr[i]);
    }
}