class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();
        while (i < m and j < n){
            if (nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                res.push_back(nums2[j]);
                i++;
                j++;
            }
            else if (nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }
        while (i<m){
            res.push_back(nums1[i]);
            i++;
        }
        while (j<n){
            res.push_back(nums2[j]);
            j++;
        }
        double d = 0.00;
        for (auto it:res){
            cout << it << " ";
        }
        int size = res.size();
        int x = size/2;
        if (size%2==0){
            double a = res[x];
            double b = res[x-1];
            return (a+b)/2.00;
        }
        else{
            double a = res[x];
            return a/1.00;
        }
        return d;
    }
};