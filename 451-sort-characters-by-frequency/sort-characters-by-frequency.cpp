class Solution {
private:
    static bool comp (pair<char,int>a,pair<char,int>b){
        if (a.second==b.second){
            return a.first>b.first;
        }
        return a.second>b.second;
    }
public:
    string frequencySort(string s) {
        unordered_map<char,int>up;
        for (auto i:s) up[i]++;
        vector<pair<char,int>>vp(up.begin(),up.end());
        sort(vp.begin(),vp.end(),comp);
        string res;
        for (auto it:vp){
            int t = it.second;
            while (t--){
                res += it.first;
            }
        }
        return res;
    }
};