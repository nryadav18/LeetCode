class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>>mos;
        int n = strs.size();
        vector<string>temp(strs.begin(),strs.end());
        for (int i=0;i<n;i++){
            sort(temp[i].begin(),temp[i].end());
            mos[temp[i]].push_back(i);
        }
        vector<vector<string>>vos;
        for (auto it : mos){
            vector<string>t;
            for (auto ls : it.second){
                t.push_back(strs[ls]);
            }
            vos.push_back(t);
        }
        return vos;
    }
};