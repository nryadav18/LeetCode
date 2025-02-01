class Solution {
public:
    int countSteps(int n, vector<int>&dp){
        if (dp[n] != -1) return dp[n];
        dp[n] = countSteps(n-1, dp)+countSteps(n-2, dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(46,-1);
        dp[0] = 1, dp[1] = 1;
        int answer = countSteps(n, dp);
        return answer;
    }
};
