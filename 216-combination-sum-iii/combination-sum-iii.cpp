class Solution {
public:
    set<vector<int>>sov;
    void recFunCall(vector<int>nums,int i,vector<int>v,int n,int t,int sum,int k){
        if (i >= n and sum != t){
            return;
        }
        else if (sum == t){
            if (v.size() == k) sov.insert(v);
            return;
        }
        else if (sum > t){
            return;
        }
        v.push_back(nums[i]);
        recFunCall(nums,i+1,v,n,t,sum+nums[i],k);
        v.pop_back();
        recFunCall(nums,i+1,v,n,t,sum,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int size = 9;
        vector<int>v,nums;
        for (int i=1;i<=10;i++){
            nums.push_back(i);
        }
        recFunCall(nums,0,v,size,n,0,k);
        if (sov.size()==0) return {};
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