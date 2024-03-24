class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>up;
        for (auto i:nums){
            up[i]++;
            if (up[i]==2){
                return i;
            }
        }
        return 0;
    }
};