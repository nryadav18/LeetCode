class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>>res(m,vector<int>(n,-1));
        queue<pair<int,int>>queue;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if (mat[i][j] == 0){
                    res[i][j] = 0;
                    queue.push({i,j});
                }
                else {
                    res[i][j] = -1;
                }
            }
        }
        while (!queue.empty()){
            int r = queue.front().first, c = queue.front().second;
            if (r-1 >= 0 and res[r-1][c] == -1){
                res[r-1][c] = res[r][c]+1;
                queue.push({r-1,c});
            }
            if (r+1 < m and res[r+1][c] == -1){
                res[r+1][c] = res[r][c]+1;
                queue.push({r+1,c});
            }
            if (c-1 >= 0 and res[r][c-1] == -1){
                res[r][c-1] = res[r][c]+1;
                queue.push({r,c-1});
            }
            if (c+1 < n and res[r][c+1] == -1){
                res[r][c+1] = res[r][c]+1;
                queue.push({r,c+1});
            }
            queue.pop();
        }
        return res;
    }
};