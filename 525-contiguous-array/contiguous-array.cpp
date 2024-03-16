class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>up;
        int sum = 0;
        int maxLength = 0;
        for (int i=0;i<n;i++){
            if (nums[i] == 0){
                sum += 1;
            }
            else{
                sum -= 1;
            }
            if (sum == 0){
                maxLength = i+1;
            }
            else if (up.find(sum) != up.end()){
                maxLength = max(maxLength , i-up[sum]);
            }
            else{
                up[sum] = i;
            }
        }
        return maxLength;
    }
};