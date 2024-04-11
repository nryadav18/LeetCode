class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n=grid.size();
        vector<int>cnt(n*n+1,0);
        for (auto it:grid){
            for (auto ls:it){
                cnt[ls]++;
            }
        }
        int a,b;
        bool f1 = false, f2 = false;
        for (int i=1;i<=n*n;i++){
            if (cnt[i]==2){
                a = i;
                f1 = true;
            }
            else if (cnt[i]==0){
                b = i;
                f2 = true;
            }
            if (f1 and f2){
                break;
            }
        }
        return {a,b};
    }
};