class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size() , maxi = 0;
        for (int i=0;i<n-1;i++) if (nums[i+1] - nums[i] > maxi) maxi = nums[i+1] - nums[i];
        return maxi;
    }
};