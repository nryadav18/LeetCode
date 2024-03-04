class Solution {
public:
    static bool comp(const pair<string,int>&a,const pair<string,int>&b){
        if (a.second == b.second) return a.first > b.first;
        return a.second > b.second;
    }
    string mostCommonWord(string s, vector<string>& v) {
        int n = s.length();
        for (int i=0;i<n;i++){
            if (isupper(s[i])){
                s[i] = tolower(s[i]);
            }
        }
        vector<string>w;
        string t;
        for (int i=0;i<n;i++){
            if (isalpha(s[i])){
                t += s[i];
            }
            else if (!isalpha(s[i]) and t!=""){
                w.push_back(t);
                t= "";
            }
            if (i==n-1 and t!=""){
                w.push_back(t);
            }
        }
        unordered_map<string,int>up1,up2;
        for (auto it : w){
            up1[it]++;
        }
        for (auto it : v){
            up2[it]++;
        }
        vector<pair<string,int>>vop;
        for (auto it : up1){
            vop.push_back(it);
        }
        sort(vop.begin(),vop.end(),comp);
        for (auto it : vop){
            if (up2[it.first] == 0){
                return it.first;
            }
        }
        return "";
    }
};