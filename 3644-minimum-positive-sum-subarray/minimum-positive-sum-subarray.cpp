class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        for (int it = l; it <= r; it++){
            int j = 0, sum = 0;
            for (int i = 0; i < it; i++){
                sum += nums[i];
            }
            if (sum > 0 and sum < minSum){
                minSum = sum;
            }
            for (int i = it ; i < nums.size() ; i++){
                sum += nums[i];
                sum -= nums[j++];
                if (sum > 0 and sum < minSum){
                    minSum = sum;
                }
            }
        }
        return (minSum == INT_MAX) ? -1 : minSum;
    }
};