class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        for (int i = 0; i < nums.size() ; i++){
            int rem = target - nums[i];
            if (ump[rem]) return {ump[rem]-1,i};
            ump[nums[i]] = i+1;
        }
        return {-1,-1};
    }
};