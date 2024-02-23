class Solution {
public:
    bool rotateString(string s, string g) {
        int m = s.length();
        int n = g.length();
        if (m!=n) return false;
        int t = n;
        while (t--){
            char v = g[n-1];
            g.pop_back();
            g = v + g;
            if (s==g) return true;
        }
        return false;
    }
};