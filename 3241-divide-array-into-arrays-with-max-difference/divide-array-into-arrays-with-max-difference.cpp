class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        int n = nums.size();
        int cnt = 0;
        for (int i=0;i<n-2;i+=3){
            if (nums[i+1] - nums[i] <= k and nums[i+2] - nums[i+1] <= k and nums[i+2] - nums[i] <= k){
                v.push_back({nums[i],nums[i+1],nums[i+2]});
                cnt++;
            }
        }
        if (cnt*3 == n) return v;
        return {};
    }
};