class Solution {
    vector<vector<int>>mat;
private:
    void recFun(vector<int>v,int i,int j){
        if (i >= j){
            mat.push_back(v);
            return;
        }
        for (int k = i ; k <= j ; k ++){
            swap(v[i],v[k]);
            recFun(v,i+1,j);
            swap(v[i],v[k]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        recFun(nums,0,n-1);
        return mat;
    }
};