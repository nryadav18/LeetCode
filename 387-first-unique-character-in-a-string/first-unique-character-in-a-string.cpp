class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        unordered_map<char,int>um;
        for (auto i:s) um[i]++;
        for (int i=0;i<n;i++) if (um[s[i]]==1) return i;
        return -1;
    }
};