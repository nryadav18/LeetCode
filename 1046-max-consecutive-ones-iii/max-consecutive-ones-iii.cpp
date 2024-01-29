class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int max_len = 0;
        int zero_cnt = 0;
        while (j<n){
            if (nums[j] == 0){
                zero_cnt++;
            }
            while (zero_cnt > k){
                if (nums[i] == 0){
                    zero_cnt--;
                }
                i++;
            }
            max_len = max(max_len,j-i+1);
            j++;
        }
        return max_len;
    }
};