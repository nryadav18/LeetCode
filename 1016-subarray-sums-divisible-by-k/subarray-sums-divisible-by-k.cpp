class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>pfSum;
        int n = nums.size();
        if (n==1){
            if (nums[0]%k==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        int sum = nums[0];
        pfSum.push_back(sum);
        for (int i=1;i<n;i++){
            sum += nums[i];
            pfSum.push_back(sum);
        }
        // for (auto it:pfSum){
        //     cout << it << " ";
        // }
        int cnt = 0;
        unordered_map<int,int>mov;
        mov[0]++;
        for (int i=0;i<n;i++){
            int rem = pfSum[i] % k;
            if (rem < 0){
                rem += k;
            }
            if (mov[rem] == 0){
                mov[rem] = 1;
            }
            else{
                cnt+=mov[rem];
                mov[rem]++;
            }
        }
        return cnt;
    }
};