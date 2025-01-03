class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int total = accumulate(nums.begin(),nums.end(),0L), sum = 0;
        int n = nums.size(), cnt = 0;
        for (int i=0;i<n-1;i++){
            sum += nums[i];
            total -= nums[i];
            if (sum >= total){
                cnt++;
            }
        }
        return cnt;
    }
};