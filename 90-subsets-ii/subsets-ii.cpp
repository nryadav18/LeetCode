class Solution {
public:
    void performDFS(vector<int>&nums,int i,int n,map<vector<int>,int>&mov, vector<vector<int>>&result,vector<int>&store){
        if (i == n) return;
        store.push_back(nums[i]);
        if (mov.find(store) == mov.end()){
            mov[store]++;
            result.push_back(store);
        }
        performDFS(nums,i+1,n,mov,result,store);
        store.pop_back();
        performDFS(nums,i+1,n,mov,result,store);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>result;
        map<vector<int>,int>mov;
        vector<int>store;
        result.push_back({});
        sort(nums.begin(),nums.end());
        performDFS(nums,0,nums.size(),mov,result,store);
        return result;
    }
};