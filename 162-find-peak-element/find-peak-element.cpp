class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size()-1, n = nums.size();
        if (n == 1) return 0;
        if (nums[low] > nums[low+1]) return 0;
        if (nums[high] > nums[high-1]) return high;
        while (low <= high){
            int mid = (low+high)>>1;
            if (nums[mid] > nums[mid+1] and nums[mid] > nums[mid-1]){
                return mid;
            }
            else if (nums[mid] < nums[mid+1]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};