class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int>frq1(1001),frq2(1001);
        vector<int>result;
        for (auto it : nums1) frq1[it]++;
        for (auto it : nums2) frq2[it]++;
        for (int i=0;i<=1000;i++){
            if (frq1[i] != 0 and frq2[i] != 0){
                int t = min(frq1[i] , frq2[i]);
                while (t--){
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};