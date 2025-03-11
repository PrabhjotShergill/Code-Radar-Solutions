int binarySearch(int arr[], int n, int target){
    int s=0, e=n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] > target){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
    }

    return -1; 
}