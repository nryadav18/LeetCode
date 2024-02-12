class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>up;
        for (int i=0;i<nums.size();i++){
            up[nums[i]]++;
        }
        for (auto it : up){
            if (it.second > nums.size()/2){
                return it.first;
            }
        }
        return -1;
    }
};