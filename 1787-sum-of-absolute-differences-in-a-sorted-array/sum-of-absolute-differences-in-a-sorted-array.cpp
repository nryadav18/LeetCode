class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int left = 0, right = accumulate(nums.begin(),nums.end(),0);
        for (int i=0;i<nums.size();i++){
            right -= nums[i];
            int leftVal = nums[i]*i - left;
            int rightVal = right - (nums[i]*(nums.size()-1-i));
            int ans = leftVal + rightVal;
            left += nums[i];
            nums[i] = ans;
        }
        return nums;
    }
};