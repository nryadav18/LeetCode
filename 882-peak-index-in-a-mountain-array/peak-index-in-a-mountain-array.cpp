class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size(), low = 0, high = arr.size()-1;
        if (n == 1) return 0;
        while (low <= high){
            int mid = (low+high)>>1;
            // cout << low << " " << mid << " " << high << endl;
            if (arr[mid-1] < arr[mid] and arr[mid] > arr[mid+1]){
                return mid;
            }
            else if (arr[mid] < arr[mid+1]){
                low = mid;
            }
            else{
                high = mid;
            }
        }
        return -1;
    }
};