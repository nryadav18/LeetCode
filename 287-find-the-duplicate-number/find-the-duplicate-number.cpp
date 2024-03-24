class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        vector<int>v(1e5+2);
        int n = nums.size();
        for (auto it : nums) v[it]++;
        for (int i=1;i<=n;i++) if (v[i]>=2) return i;
        return 0;
    }
};