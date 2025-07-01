class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>ump;
        for (auto it : nums){
            if (ump[it]) return true;
            ump[it]++;
        }
        return false;
    }
};