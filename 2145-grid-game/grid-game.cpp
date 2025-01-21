class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long suf = 0, pre = 0;
        for (int i=0;i<grid[0].size();i++){
            suf += grid[0][i];
        }
        long long maxi = LLONG_MAX;
        for (int i=0;i<grid[0].size();i++){
            suf -= grid[0][i];
            maxi = min(maxi,max(suf,pre));
            pre += grid[1][i];
        }
        return maxi;
    }
};