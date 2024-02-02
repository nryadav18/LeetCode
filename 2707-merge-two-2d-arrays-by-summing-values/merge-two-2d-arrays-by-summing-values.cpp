class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>v;
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
        int j = 0;
        while (i<m and j<n){
            if (nums1[i][0] == nums2[j][0]){
                int id = nums1[i][0];
                int val = nums1[i][1] + nums2[j][1];
                v.push_back({id,val});
                i++;
                j++;
            }
            else if (nums1[i][0] < nums2[j][0]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while (i<m){
            v.push_back(nums1[i]);
            i++;
        }
        while (j<n){
            v.push_back(nums2[j]);
            j++;
        }
        return v;
    }
};