int searchInRotatedArray(int arr[], int n, int target){
    int s=0, e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
            ans=mid;
        }
        else if(arr[mid] < arr[0]){
            ans = mid;
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}