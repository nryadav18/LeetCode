class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        unordered_map<char,char>up1,up2;
        int n = s.length();
        for (int i=0;i<n;i++){
            if (up1.find(s[i]) == up1.end()){
                up1[s[i]] = t[i];
            }
            else{
                if (up1[s[i]] != t[i]){
                    return false;
                }
            }
            if (up2.find(t[i]) == up2.end()){
                up2[t[i]] = s[i];
            }
            else{
                if (up2[t[i]] != s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};