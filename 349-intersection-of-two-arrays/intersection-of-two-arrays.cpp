class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res,a(1001,0),b(1001,0);
        for (auto i : nums1) a[i]++;
        for (auto i : nums2) b[i]++;
        for (int i=0;i<=1000;i++){
            if (a[i]>=1 and b[i]>=1){
                res.push_back(i);
            }
        }
        return res;
    }
};