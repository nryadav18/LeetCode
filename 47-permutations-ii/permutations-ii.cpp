class Solution {
set<vector<int>>sov;
private:
    void recFun(vector<int>v,int i,int j){
        if (i >= j){
            sov.insert(v);
            return;
        }
        for (int k = i ; k <= j ; k++){
            swap(v[i],v[k]);
            recFun(v,i+1,j);
            swap(v[i],v[k]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        recFun(nums,0,n-1);
        vector<vector<int>>mat;
        for (auto it : sov){
            mat.push_back(it);
        }
        return mat;
    }
};