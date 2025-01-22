class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, cnt = 0, n = s.length();
        unordered_map<int,int>um;
        while (j < n){
            um[s[j]]++;
            while (um[s[j]] > 1){
                um[s[i]]--;
                i++;
            }
            cnt = max(cnt, j-i+1);
            j++;
        }
        return cnt;
    }
};