class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = nums.size();
        if (k > n) return 0;
        int maxi = *max_element(nums.begin(),nums.end());
        long long res = 0;
        unordered_map<int,int>up;
        int i = 0;
        int j = 0;
        int cnt = 0;
        while ( j < n ){
            if (nums[j] == maxi){
                up[nums[j]]++;
                while (up[nums[j]] >= k and i<=j){
                    if (nums[i] == maxi){
                        up[nums[i]]--;
                    }
                    i++;
                    res += n-j;
                }
            }
            j++;
        }
        return res;
    }
};