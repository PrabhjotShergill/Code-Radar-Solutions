int searchInRotatedArray(int arr[], int n, int target){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] > arr[mid+1]){
            s = mid+1;
        }
        else if(arr[mid] < arr[mid+1]){
            ans = mid;
            e = mid-1;
        }
        else{
            return ans;
        }

        mid = s + (e-s)/2;
    }
}