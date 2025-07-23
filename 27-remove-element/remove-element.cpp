class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(), i = n-1, j = n-1;
        while (j >= 0){
            if (nums[j] == val){
                swap(nums[i--],nums[j--]);
            } else {
                j--;
            }
        }
        return i+1;
    }
};