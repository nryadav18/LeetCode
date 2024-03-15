class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(1e5+1,1);//10^5+2
        vector<int>suffix(1e5+1,1);
        int n = nums.size();
        int preProd = 1;
        int sufProd = 1;
        for (int i = 0 ; i < n ; i++){
            preProd *= nums[i];
            prefix[i+1] = preProd;
        }
        for (int i = n-1 ; i >= 0 ; i--){
            sufProd *= nums[i];
            suffix[i+1] = sufProd;
        }
        for (int i = 1 ; i <= n ; i++){
            int val = prefix[i-1]*suffix[i+1];
            //cout << val << " ";
            nums[i-1] = val;
        }
        return nums;
    }
};