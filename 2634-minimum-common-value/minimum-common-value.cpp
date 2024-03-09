class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int m = nums1.size();
        int n = nums2.size();
        while (i<m and j<n){
            if (nums1[i] == nums2[j]){
                return nums1[i];
            }
            else if (nums1[i] < nums2[j]){
                while (nums1[i] < nums2[j]){
                    i++;
                    if (i>=m){
                        return -1;
                    }
                }
            }
            else{
                while (nums1[i] > nums2[j]){
                    j++;
                    if (j>=n){
                        return -1;
                    }
                }
            }
        }
        return -1;
    }
};