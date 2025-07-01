class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        for (int i = 0 ; i < n-1 ; i++){
            if (nums[i] == nums[i+1]){
                cnt++;
            }
            else cnt = 0;
            if (cnt >= 2){
                for (int j=i+1;j<n-1;j++){
                    swap(nums[j], nums[j+1]);
                }
                cnt--;
                n--;
                i--;
            }
        }
        return n;
        //               n
        // 0 0 1 1 1 2 3 3 1
        //         i     
        // cnt = 2
        // op = 1
    }
};