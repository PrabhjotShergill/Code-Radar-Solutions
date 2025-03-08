void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}