class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        unordered_map<string,int>raj,jar;
        if (s.length() == k) return true;
        int parts = s.length()/k, part = 1;
        string sub;
        for (int i=0;i<s.length();i++){
            sub += s[i];
            if (part == parts){
                raj[sub]++;
                sub = "";
                part = 0;
            }
            part++;
        }
        sub = "";
         for (int i=0;i<t.length();i++){
            sub += t[i];
            if (part == parts){
                jar[sub]++;
                sub = "";
                part = 0;
            }
            part++;
        }
        for (auto it : raj){
            if (it.second != jar[it.first]){
                return false;
            }
        }
        return true;
    }
};