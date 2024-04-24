class Solution {
public:
    int funCall(int n,vector<int>&v){
        if (n == 0) return 0;
        if (n == 1 or n == 2) return 1;
        if (v[n-1] == -1) v[n-1] = funCall(n-1,v);
        if (v[n-2] == -1) v[n-2] = funCall(n-2,v);
        if (v[n-3] == -1) v[n-3] = funCall(n-3,v);
        v[n] = v[n-1]+v[n-2]+v[n-3];
        return v[n];
    }
    int tribonacci(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int>v(n+1,-1);
        int res = funCall(n,v);
        return res;
    }
};