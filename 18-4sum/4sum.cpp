class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>>sov;
        for (int i=0;i<n-3;i++){
            for (int j=i+1;j<n-2;j++){
                int k = j+1;
                int l = n-1;
                while (k<l){
                    long long int sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target){
                        sov.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if (sum < target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        vector<vector<int>>mat;
        if (sov.size()==0) return mat;
        for (auto it:sov){
            vector<int>temp;
            for (auto ls:it){
                temp.push_back(ls);
            }
            mat.push_back(temp);
        }
        return mat;
    }
};