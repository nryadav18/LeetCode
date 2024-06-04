class Solution {
public:
    int longestPalindrome(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.length();
        if (n == 1) return 1;
        unordered_map<int,int>up;
        for (auto it : s){
            up[it]++;
        }
        int cnt = 0;
        bool isOneFound = false;
        for (auto it : up){
            if (it.second == 1){
                isOneFound = true;
            }
            else if (it.second % 2 == 0){
                cnt += it.second;
            }
            else{
                cnt += it.second - 1;
                isOneFound = true;
            }
        }
        if (isOneFound){
            cnt += 1;
        }
        return cnt;
    }
};