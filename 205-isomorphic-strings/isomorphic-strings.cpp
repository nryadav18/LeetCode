class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<char>v1(256,' ');
        vector<char>v2(256,' ');
        int n = s.length();
        for (int i=0;i<n;i++){
            int ind1 = s[i];
            if (v1[ind1] == ' '){
                v1[ind1] = t[i];
            }
            else{
                if (v1[ind1] != t[i]){
                    return false;
                }
            }
            int ind2 = t[i];
            if (v2[ind2] == ' '){
                v2[ind2] = s[i];
            }
            else{
                if (v2[ind2] != s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};