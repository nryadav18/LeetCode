class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>vov(n+1,vector<int>(2,0));
        for (auto it : trust){
            vov[it[0]][1]++;
            vov[it[1]][0]++;
        }
        for (int i=1;i<=n;i++){
            if (vov[i][0] == n-1 and vov[i][1] == 0){
                return i;
            }
        }
        return -1;
    }
};