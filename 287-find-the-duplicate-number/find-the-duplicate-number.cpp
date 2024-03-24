class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>v(1e5+2);
        int n = nums.size();
        for (auto it : nums) v[it]++;
        for (int i=1;i<=n;i++) if (v[i]>=2) return i;
        return 0;
    }
};