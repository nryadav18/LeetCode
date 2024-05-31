class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        unordered_map<int,int>up;
        int n = nums.size();
        for (auto it : nums){
            up[it]++;
        }
        vector<int>result;
        for (auto it : up){
            if (it.second == 1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};