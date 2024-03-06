class Solution {
public:
    bool check(vector<vector<int>>&v,int n){
        if (n==1) return false;
        int i=0;
        int j=i+1;
        while (i<n){
            int val = v[i][1];
            while (j<n){
                if (v[j][0] <= v[i][1]){
                    return true;
                }
                j++;
            }
            i++;
            j=i+1;
        }
        return false;
    }
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        if (n==1) return v;
        int i=0;
        int j=i+1;
        vector<vector<int>>res;
        while (i<n){
            int val = v[i][1];
            while (j<n){
                if (v[j][0] <= v[i][1]){
                    val = max(v[j][1] , val);
                    //cout << val << endl;
                    j++;
                }
                else{
                    break;
                }
            }
            //if (i+1 == j and )
            res.push_back({v[i][0],val});
            i = j;
            j = i+1;
        }
        if (!check(res,res.size())) return res;
        return merge(res);
    }
};