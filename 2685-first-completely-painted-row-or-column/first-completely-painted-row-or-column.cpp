class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        iostream::sync_with_stdio(0);
        cin.tie(nullptr);
        int m = mat.size(), n = mat[0].size();
        unordered_map<int,pair<int,int>>main;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                main[mat[i][j]] = {i,j};
            }
        }
        unordered_map<int,int>row,col;
        for (int i = 0; i < arr.size() ; i++){
            row[main[arr[i]].first]++;
            if (row[main[arr[i]].first] == n) return i;
            col[main[arr[i]].second]++;
            if (col[main[arr[i]].second] == m) return i;
        }
        return -1;
    }
};