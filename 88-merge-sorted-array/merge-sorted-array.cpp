class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>final;
        int i=0,j=0;
        while (i<m and j<n){
            if (nums1[i]==nums2[j]){
                final.push_back(nums1[i]);
                final.push_back(nums2[j]);
                i++;
                j++;
            }
            else if (nums1[i]<nums2[j]){
                final.push_back(nums1[i]);
                i++;
            }
            else{
                final.push_back(nums2[j]);
                j++;
            }
        }
        if (i<m){
            while (i<m){
                final.push_back(nums1[i]);
                i++;
            }
        }
        if (j<n){
            while (j<n){
                final.push_back(nums2[j]);
                j++;
            }
        }
        for (int i=0;i<m+n;i++){
            nums1[i] = final[i];
        }
    }
};