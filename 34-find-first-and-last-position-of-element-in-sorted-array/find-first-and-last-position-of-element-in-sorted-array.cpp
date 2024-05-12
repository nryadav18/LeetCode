class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int>v;
        int bin = binary_search(nums.begin(),nums.end(),target);
        if (bin){
            auto low = lower_bound(nums.begin(),nums.end(),target);
            auto upp = upper_bound(nums.begin(),nums.end(),target);
            int l = low - nums.begin();
            int u = upp - nums.begin();
            return {l,u-1};
        }
        return {-1,-1};
    }
};