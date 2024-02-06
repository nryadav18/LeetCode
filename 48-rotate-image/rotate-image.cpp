class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int>v;
        for(int j=0;j<n;j++){
            for (int i=n-1;i>=0;i--){
                v.push_back(matrix[i][j]);
            }
        }
        int ind=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                matrix[i][j] = v[ind++];
            }
        }
    }
};