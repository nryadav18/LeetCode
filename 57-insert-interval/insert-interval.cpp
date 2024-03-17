class Solution {
public:
    vector<vector<int>> check(vector<vector<int>>&vec,int n){
        ios_base::sync_with_stdio(0);
        vector<vector<int>>v;
        int i = 0;
        int mergeCount = 0;
        while (i<n){
            if (i==n-1){
                v.push_back(vec[i]);
                i++;
            }
            else{
                if (vec[i][1] >= vec[i+1][0]){
                    mergeCount++;
                    int a = min(vec[i][0] , vec[i+1][0]);
                    int b = max(vec[i][1] , vec[i+1][1]);
                    v.push_back({a,b});
                    i+=2;
                }
                else{
                    v.push_back(vec[i]);
                    i++;
                }
            }
        }
        if (mergeCount) return check(v,v.size());
        return v;
    }
    vector<vector<int>> insert(vector<vector<int>>& vec, vector<int>& single) {
        ios_base::sync_with_stdio(0);
        vector<vector<int>>v;
        int i = 0;
        int mergeCount = 0;
        int n = vec.size();
        int m = single.size();
        if (n == 0) return {single};
        if (m == 0) return vec;
        if (vec[0][0] > single[0] and vec[n-1][1] < single[1]) return {single};
        vec.push_back(single);
        sort(vec.begin(),vec.end());
        n++;
        while (i<n){
            if (i==n-1){
                v.push_back(vec[i]);
                i++;
            }
            else{
                if (vec[i][1] >= vec[i+1][0]){
                    mergeCount++;
                    int a = min(vec[i][0] , vec[i+1][0]);
                    int b = max(vec[i][1] , vec[i+1][1]);
                    v.push_back({a,b});
                    i+=2;
                }
                else{
                    v.push_back(vec[i]);
                    i++;
                }
            }
        }
        if (mergeCount) v = check(v,v.size());
        return v;
    }
};