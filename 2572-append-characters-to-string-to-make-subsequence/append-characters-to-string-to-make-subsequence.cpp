class Solution {
public:
    int appendCharacters(string s, string t) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int length = 0, n = s.length(), ind = 0;
        for (int i=0;i<n;i++){
            if (s[i] == t[ind]){
                length++;
                ind++;
            }
        }
        int result = t.length() - length;
        return result;
    }
};