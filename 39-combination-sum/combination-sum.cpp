class Solution {
public:
    vector<vector<int>>final;
    void recFunCall(vector<int>nums,int i,vector<int>v,int n,int t,int sum){
        if (i>=n and sum != t){
            return;
        }
        else if (sum == t){
            final.push_back(v);
            return;
        } 
        else if (sum > t){
            return;
        }
        v.push_back(nums[i]);
        recFunCall(nums,i,v,n,t,sum+nums[i]);
        v.pop_back();
        recFunCall(nums,i+1,v,n,t,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int n = nums.size();
        recFunCall(nums,0,res,n,target,0);
        return final;
    }
};