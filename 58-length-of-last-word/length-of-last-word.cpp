class Solution {
public:
    int lengthOfLastWord(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.length();
        int i = n-1;
        while (i>=0 and s[i]==' '){
            i--;
        }
        int cnt = 0;
        while (i>=0 and s[i]!=' '){
            i--;
            cnt++;
        }
        return cnt;
    }
};