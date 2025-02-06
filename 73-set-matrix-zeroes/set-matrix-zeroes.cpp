class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool>row(201,false), col(201,false);
        int m = matrix.size(), n = matrix[0].size();
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if (matrix[i][j] == 0){
                    row[i] = true, col[j] = true;
                }
            }
        }
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if (row[i] or col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};