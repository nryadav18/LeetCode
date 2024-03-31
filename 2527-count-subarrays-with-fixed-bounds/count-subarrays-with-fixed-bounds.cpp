class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
        long long int cnt = 0;
        int i = 0;
        int ind = -1, mini = -1 , maxi = -1;
        while (i<n){
            if (!(nums[i] >= minK and nums[i] <= maxK)){
                ind = i;
            }
            if (nums[i] == minK){
                mini = i;
            }
            if (nums[i] == maxK){
                maxi = i;
            }
            cnt += max(0, min(mini, maxi) - ind);
            i++;
        }
        return cnt;
    }
};