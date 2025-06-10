class Solution {
public:
    int maxDifference(string s) {
        vector<int>store(26,0);
        for (auto it : s) store[it - 'a']++;
        int even = INT_MAX, odd = INT_MIN;
        for (auto it : store){
            if (it % 2) odd = max(odd,it);
            else if (it != 0) even = min(even,it);
        }
        return odd-even;
    }
};