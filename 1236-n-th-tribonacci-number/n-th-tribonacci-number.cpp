class Solution {
public:
    int tribonacci(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (n == 0) return 0;
        if (n == 1 or n == 2) return 1;
        int a=0,b=1,c=1;
        long long d;
        for(int i=3;i<=n;i++){
            d = a+b+c;
            a = b;
            b = c;
            c = d;
        }
        return d;
    }
};