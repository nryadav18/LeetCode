class Solution {
public:
    int pivotInteger(int n) {
        if (n==1) return 1;
        int ts = 0;
        for (int i=1;i<=n;i++){
            ts += i;
        }
        int ls = 0;
        for (int i=0;i<n;i++){
            ls += i+1;
            if (ls==ts){
                return i+1;
            }
            ts-=i+1;
        }
        return -1;
    }
};