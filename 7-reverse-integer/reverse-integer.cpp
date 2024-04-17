class Solution {
public:
    int reverse(int x) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        long long int s=0;
        while (x!=0){
            s = (s*10) + (x%10);
            x/=10;
        }
        int c1 = INT_MAX;
        int c2 = INT_MIN;
        if (s>c1 or s<c2) return 0;
        return s;
    }
};