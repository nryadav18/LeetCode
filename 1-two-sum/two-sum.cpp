class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int>v;
        int n=nums.size();
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if (nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};