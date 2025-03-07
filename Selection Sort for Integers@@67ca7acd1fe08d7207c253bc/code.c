#include<stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min_index = i;
        int j;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}


void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}