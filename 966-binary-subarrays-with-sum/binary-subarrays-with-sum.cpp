class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int zeroCount = count(nums.begin(),nums.end(),0);
        int onesCount = count(nums.begin(),nums.end(),1);
        if ((zeroCount == n and goal == 0)) return (n*(n+1))/2;
        if ((zeroCount == n and goal == 1)) return 0;
        int cnt = 0;
        for (int i=0;i<n-1;i++){
            int sum = nums[i];
            for (int j=i+1;j<n;j++){
                sum += nums[j];
                if (sum > goal){
                    break;
                }
                if (sum == goal){
                    cnt++;
                }
            }
        }

        if ((nums[n-1] == 1 and goal == 1) or (nums[n-1] == 0 and goal == 1)) return cnt+1;
        if (goal == 0) return cnt+(count(nums.begin(),nums.end(),0));
        return cnt;
    }
};