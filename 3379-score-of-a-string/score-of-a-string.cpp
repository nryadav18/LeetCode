class Solution {
public:
    int scoreOfString(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.length() , val = 0;
        for (int i=0;i<n-1;i++) {val += abs(s[i]-s[i+1]);}
        return val;
    }
};