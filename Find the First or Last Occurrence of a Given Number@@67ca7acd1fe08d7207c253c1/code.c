int findOccurrence(int arr[], int n, int target, int mode){
    int s=0, e=n-1;
    int ans=-1;
    if(mode == 'F'){
        while(s<=e){
            int mid = s+(e-s)/2;

            if(arr[mid] == target){
                ans=mid;
                e = mid-1;
            }

            else if(arr[mid] > target){
                e = mid-1;
            }

            else{
                s = mid+1;
            }
        }
        return ans;
    }

    else{
        while(s<=e){
            int mid = s+(e-s)/2;

            if(arr[mid] == target){
                ans = mid;
                s = mid+1;
            }

            else if(arr[mid] > target){
                e = mid-1;
            }

            else{
                e = mid-1;
            }
        }
        return ans;
    }
}