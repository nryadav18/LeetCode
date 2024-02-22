class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>>vov(n+1);
        for (auto it : trust){
            vov[it[0]].second++;
            vov[it[1]].first++;
        }
        for (int i=1;i<=n;i++){
            if (vov[i].first == n-1 and vov[i].second == 0){
                return i;
            }
        }
        return -1;
    }
};