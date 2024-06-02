class Solution {
public:
    void reverseString(vector<char>& s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.size(), i = 0, j = n - 1;
        while (i < j) swap(s[i++],s[j--]); 
    }
};