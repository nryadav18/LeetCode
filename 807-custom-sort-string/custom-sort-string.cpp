class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>v1(26,0),v2(26,0);
        for (auto it : order){
            v1[it - 'a']++;
        }
        for (auto it : s){
            v2[it - 'a']++;
        }
        string jyo;
        for (auto it : order){
            if (v2[it - 'a'] >= 1){
                while (v2[it - 'a']--){
                    jyo += it;
                }
                v2[it - 'a'] = 0;
            }
        }
        for (auto it : s){
            if (v2[it - 'a'] >= 1){
                jyo += it;
                v2[it - 'a']--;
            }
        }
        return jyo;
    }
};