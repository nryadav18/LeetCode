class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size(), val = tgamma(n+1);
        vector<vector<int>>result;
        for (int i = 0 ; i < val ; i++){
            result.push_back(nums);
            next_permutation(nums.begin(), nums.end());
        }
        return result;
    }
};