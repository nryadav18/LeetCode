class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int n = nums.size();
        if (n==1) return {};
        vector<int>v(1e5+1,0);
        for (auto it : nums){
            v[it]++;
        }
        vector<int>res;
        for (int i=1;i<=n;i++){
            if (v[i] == 2){
                res.push_back(i);
            }
        }
        return res;
    }
};