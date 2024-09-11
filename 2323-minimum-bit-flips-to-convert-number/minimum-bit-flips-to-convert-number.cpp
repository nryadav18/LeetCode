class Solution {
public:
    int minBitFlips(int start, int goal) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int cnt = 0 ;
        int ans = (start ^ goal) ;
        while ( ans ){
            if ( (ans & 1) ) cnt ++ ;
            ans = ans >> 1 ;
        }
        return cnt ;
    }
};