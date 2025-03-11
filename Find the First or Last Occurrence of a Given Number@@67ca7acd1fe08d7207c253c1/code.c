int findOccurrence(int arr[], int n, int target, int mode){
    int s=0, e=n-1;
    int ans=-1;
    if(mode == 'F'){
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

    else{
        while(s<=e){
            int mid = s+(e-s)/2;

            if(arr[mid] == target){
                return mid;
            }

            else if(arr[mid] > target){
                s = mid+1;
            }

            else{
                e = mid-1;
            }
        }
        return -1;
    }
}