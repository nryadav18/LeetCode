class Solution {
public:
    bool isUnique(vector<int>&nums,int i){
        set<int>st(nums.begin()+i,nums.end());
        return st.size() == nums.size()-i;
    }
    int minimumOperations(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        for (int i=0;i<n;i+=3){
            if (!isUnique(nums,i)){
                cnt++;
            }
        }
        return cnt;
    }
};