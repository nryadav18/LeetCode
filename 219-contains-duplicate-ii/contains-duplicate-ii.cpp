class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = nums.size();
        if ( k >= n){
            k = n-1;
        }
        if (n == 1){
            return false;
        }
        unordered_map<int,int>up;
        int i=0;
        int j=0;
        while(j<=k){
            up[nums[j]]++;
            if (up[nums[j]] >= 2){
                return true;
            }
            j++;
        }
        while (j<n){
            up[nums[i]]--;
            if (up[nums[i]] == 0){
                up.erase(nums[i]);
            }
            i++;
            up[nums[j]]++;
            if (up[nums[j]] >= 2){
                return true;
            }
            j++;
        }
        return false; 
    }
};