class Solution {
public:
    void performDFS(vector<int>&nums,int i,int n,vector<vector<int>>&result,vector<int>&store){
        if (i == n) return;
        store.push_back(nums[i]);
        result.push_back(store);
        performDFS(nums,i+1,n,result,store);
        store.pop_back();
        performDFS(nums,i+1,n,result,store);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>store;
        performDFS(nums,0,nums.size(),result,store);
        int ans = 0;
        for (auto it : result) {
            int temp = 0;
            for (auto ls : it) temp ^= ls;
            ans += temp;
        }
        return ans;
    }
};