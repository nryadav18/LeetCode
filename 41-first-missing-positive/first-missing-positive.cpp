class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        sort(nums.begin(),nums.end());
        int cnt = 1;
        for (auto it : nums){
            if (it > 0){
                if (it == cnt){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};