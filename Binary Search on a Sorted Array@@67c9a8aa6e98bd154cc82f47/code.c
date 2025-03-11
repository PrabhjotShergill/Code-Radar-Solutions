int binarySearch(int arr[], int n, int target){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == target){
            s = mid+1;
            return mid;
        }

        else if(arr[mid] > target){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
    }
    mid = s+(e-s)/2;

    return -1; 
}