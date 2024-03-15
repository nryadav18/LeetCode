class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre = 1;
        int suf = 1;
        int n = nums.size();
        vector<int>pref(n+2,1) , suff(n+2,1);
        for (int i=0;i<n;i++){
            pre = pre * nums[i];
            pref[i+1] = pre;
        }
        for (int i=n-1;i>=0;i--){
            suf = suf * nums[i];
            suff[i] = suf;
        }
        // for (auto it : pref) cout << it << " ";
        // cout << endl;
        // for (auto it : suff) cout << it << " ";
        for (int i=1;i<=n;i++){
            nums[i-1] = pref[i-1]*suff[i];
        }
        return nums;
    }
};