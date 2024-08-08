class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int>res;
        int m = matrix.size(), n = matrix[0].size(), dir = 0;
        int left = 0, right = n-1, top = 0, bottom = m-1;
        while (left <= right and top <= bottom){
            if (dir == 0 and left <= right and top <= bottom){
                for (int i=left;i<=right;i++){
                    res.push_back(matrix[top][i]);
                }
                dir++, top++;
            }
            if (dir == 1 and left <= right and top <= bottom){
                for (int i=top;i<=bottom;i++){
                    res.push_back(matrix[i][right]);
                }
                dir++, right--;
            }
            if (dir == 2 and left <= right and top <= bottom){
                for (int i=right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                }
                dir++, bottom--;
            }
            if (dir == 3 and left <= right and top <= bottom){
                for (int i=bottom;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                dir = 0, left++;
            }
        }
        return res;
    }
};