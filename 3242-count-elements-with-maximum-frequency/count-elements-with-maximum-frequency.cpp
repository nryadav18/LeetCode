class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>frqVec(101,0);
        for (auto it : nums){
            frqVec[it]++;
        }
        int maxi = *max_element(frqVec.begin(),frqVec.end());
        int cnt = count(frqVec.begin(),frqVec.end(),maxi);
        return maxi*cnt;
    }
};