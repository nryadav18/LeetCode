class Solution {
public:
    static bool customComperator(vector<int>&a,vector<int>&b){
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),customComperator);
        vector<vector<int>>result;
        result.push_back(intervals[0]);
        int n = intervals.size(), cnt = 0;
        for (int i=1;i<n;i++){
            auto last = result.back();
            if (last[1] > intervals[i][0]){
                cnt++;
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return cnt;
    }
};