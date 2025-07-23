class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1, n = nums.size();
        while (i <= j and j < n) nums[i] == nums[j] ? j++ : nums[++i] = nums[j];
        return i+1;
    }
};