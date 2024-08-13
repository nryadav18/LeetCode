class Solution {
public:
    set<vector<int>>sov;
    void recFunCall(vector<int>nums,int i,vector<int>v,int n,int t,int sum){
        if ((i >= n and sum != t) or sum > t){
            return ;
        }
        else if (sum == t){
            sov.insert(v);
            return;
        }
        v.push_back(nums[i]);
        recFunCall(nums,i+1,v,n,t,sum+nums[i]);
        while (i+1 < n and nums[i]==nums[i+1]) i++;
        v.pop_back();
        recFunCall(nums,i+1,v,n,t,sum);
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int>v;
        recFunCall(nums,0,v,n,target,0);
        vector<vector<int>>res;
        for (auto it : sov){
            vector<int>temp;
            for (auto ls : it){
                temp.push_back(ls);
            }
            res.push_back(temp);
        }
        return res;
    }
};