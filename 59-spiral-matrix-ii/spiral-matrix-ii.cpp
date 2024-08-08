class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        int val = 1, dir = 0;
        int left = 0, right = n-1, top = 0, bottom = n-1;
        while (left <= right and top <= bottom){
            if (dir == 0 and left <= right and top <= bottom){
                for (int i=left;i<=right;i++){
                    mat[top][i] = val++;
                }
                dir++, top++;
            }
            if (dir == 1 and left <= right and top <= bottom){
                for (int i=top;i<=bottom;i++){
                    mat[i][right] = val++;
                }
                dir++, right--;
            }
            if (dir == 2 and left <= right and top <= bottom){
                for (int i=right;i>=left;i--){
                    mat[bottom][i] = val++;
                }
                dir++, bottom--;
            }
            if (dir == 3 and left <= right and top <= bottom){
                for (int i=bottom;i>=top;i--){
                    mat[i][left] = val++;
                }
                dir = 0, left++;
            }
        }
        return mat;
    }
};