class Solution {
private:
    int fun(vector<int>&nums,int k){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = nums.size() , i = 0 , j = 0 , res = 0;
        unordered_map<int,int>up;
        while (j < n){
            up[nums[j]]++;
            while (up.size() > k){
                --up[nums[i]];
                if (up[nums[i]] == 0){
                    up.erase(nums[i]);
                }
                i++;
            }
            res += j-i+1;
            j++;
        }
        return res;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        return fun(nums , k) - fun(nums , k-1);
    }
};