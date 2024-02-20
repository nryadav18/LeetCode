class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int l = (n*(n+1))/2;
        int r = 0;
        r = accumulate(nums.begin(),nums.end(),r);
        int res = abs(l-r);
        return res;
    }
};