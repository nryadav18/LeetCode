class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (m*n<original.size() or m*n>original.size()) return {};
        vector<vector<int>>v(m,vector<int>(n,0));
        int ind=0;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                v[i][j] = original[ind++];
            }
        }
        return v;
    }
};