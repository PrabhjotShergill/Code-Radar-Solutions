#include<stdio.h>
void swap(char* a, char* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(char arr[], int n){
    for(int i=0; i<n; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
    swap(&arr[i], &arr[minIndex]);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%c ", arr[i]);
    }
}