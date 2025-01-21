class Solution {
public:
    void balance(multiset<int>& lowms, multiset<int>& highms) {
        if (lowms.size() > highms.size() + 1) {
            highms.insert(*(lowms.rbegin()));
            lowms.erase(prev(lowms.end()));
        }
        if (lowms.size() < highms.size()) {
            lowms.insert(*(highms.begin()));
            highms.erase(highms.begin());
        }
    }
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        multiset<int> lowms, highms;
        vector<double> result;
        for (int i = 0; i < nums.size(); i++) {
            if (lowms.empty() || *lowms.rbegin() >= nums[i]) {
                lowms.insert(nums[i]);
            } 
            else {
                highms.insert(nums[i]);
            }
            balance(lowms, highms);
            if (i >= k) {
                if (nums[i - k] <= *lowms.rbegin()) {
                    lowms.extract(nums[i-k]);
                }
                else {
                    highms.extract(nums[i-k]);
                }
                balance(lowms, highms);
            }
            if (i >= k - 1) {
                double ans;
                if (k % 2 == 0) {
                    ans = (((double)*lowms.rbegin() + (double)*highms.begin()) / 2.0);
                } else {
                    ans = (double)(*lowms.rbegin());
                }
                result.push_back(ans);
            }
        }
        return result;
    }
};