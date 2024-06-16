class Solution {
public:
    bool wordPattern(string pattern, string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.length();
        vector<string>vos;
        string temp;
        for (int i=0;i<n;i++){
            if ((s[i] == ' ' and temp != "") or i == n-1){
                if (i == n-1){
                    temp += s[i];
                }
                vos.push_back(temp);
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        if (pattern.length() != vos.size()){
            return false;
        }
        map<char,string>mp1;
        map<string,char>mp2;
        int m = pattern.length();
        for (int i = 0 ; i < m ; i++){
            if (mp1.find(pattern[i]) != mp1.end()){
                if (mp1[pattern[i]] != vos[i]){
                    return false;
                }
            }
            else if (mp2.find(vos[i]) != mp2.end()){
                if (mp2[vos[i]] != pattern[i]){
                    return false;
                }
            }
            else{
                mp1[pattern[i]] = vos[i];
                mp2[vos[i]] = pattern[i];
            }
        }
        return true;
    }
};