class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for (auto it : nums1){
            if (mp[it] == 0){
                mp[it]++;
            }
        }
        for (auto it : nums2){
            if (mp[it] == 1){
                mp[it]++;
            }
        }
        for (auto it : mp){
            if (it.second >= 2){
                return it.first;
            }
        }
        return -1;
    }
};