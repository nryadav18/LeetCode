class Solution {
public:
    string shortestCompletingWord(string s, vector<string>& v) {
        string t;
        map<char,int>sMap;
        int n = s.length();
        for (int i=0;i<n;i++){
            if (isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            if (isalpha(s[i])){
                t += s[i];
            }
        }
        //return t;
        for (auto it : t){
            sMap[it]++;
        }
        string res;
        int len = INT_MAX;
        for (auto it : v){
            map<char,int>vMap;
            for (auto ls : it){
                vMap[ls]++;
            }
            bool flag = true;
            for (auto rj : sMap){
                int val = rj.second;
                int req = vMap[rj.first];
                if (req < val){
                    flag = false;
                    break;
                }
            }
            if (flag and it.length() < len){
                res = it;
                len = it.length();
            }
        }
        return res;
    }
};