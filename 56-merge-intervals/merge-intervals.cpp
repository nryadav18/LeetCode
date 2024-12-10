class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        result.push_back(intervals[0]);
        int n = intervals.size();
        for (int i=1;i<n;i++){
            auto last = result.back();
            if (last[1] >= intervals[i][0]){
                int len = result.size();
                result[len-1][1] = max(result[len-1][1],intervals[i][1]);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};