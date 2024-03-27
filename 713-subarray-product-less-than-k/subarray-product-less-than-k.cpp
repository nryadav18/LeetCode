class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = nums.size();
        long long int val = 1;
        int mod = 1e9+7;
        for (int i=0;i<n;i++){
            val = (val*nums[i])%mod;
        }
        if (val%mod < k){
            int res = (n*(n+1))/2;
            return res;
        }
        if (n==1){
            if (nums[0] < k){
                return 1;
            }
            return 0;
        }
        int cnt = 0;
        for (int i=0;i<n;i++){
            int prod = nums[i];
            if (prod < k){
                cnt++;
            }
            if (i != n-1){
                for (int j=i+1;j<n;j++){
                    prod *= nums[j];
                    if (prod < k){
                        cnt++;
                        //cout << i <<" " << j << endl;
                    }
                    else if (prod > k){
                        break;
                    }
                }
            }
        }
        return cnt;
    }
};