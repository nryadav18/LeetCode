class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n=nums.size();
        if (n==1 or n<=k) return n;
        unordered_map<int,int>up;
        int i=0;
        int j=0;
        int max_len = 0;
        while (j<n){
            up[nums[j]]++;
            if (up[nums[j]] <= k){
                int len = j-i+1;
                if (len > max_len){
                    max_len = len;
                }
            }
            else{
                while (up[nums[j]] > k){
                    up[nums[i]]--;
                    i++;
                }
            }
            j++;
        }
        return max_len;
    }
};