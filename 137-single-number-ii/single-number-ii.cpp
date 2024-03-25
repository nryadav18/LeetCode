class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int maxi,mini;
        maxi = mini = 0;
        unordered_map<int,int>up;
        for (auto it : nums){
            up[it]++;
        }
        for (auto it : up){
            if (it.second == 1){
                return it.first;
            }
        }
        return 0;
    }
};