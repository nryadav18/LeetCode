class Solution {
public:
    static bool jyoSort(const vector<int>&a,vector<int>&b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),jyoSort);
        int cnt = 1;
        int prEnd = points[0][1];
        int n = points.size();
        for (int i=1;i<n;i++){
            if (points[i][0] > prEnd){
                cnt++;
                prEnd = points[i][1];
            }
        }
        return cnt;
    }
};