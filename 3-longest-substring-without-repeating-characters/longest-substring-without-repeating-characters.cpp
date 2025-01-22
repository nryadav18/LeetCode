class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(), cnt = 0;
        for (int i=0;i<n;i++){
            unordered_set<int>us;
            for (int j=i;j<n;j++){
                us.insert(s[j]);
                if (us.size() == j-i+1){
                    cnt = max(cnt, j-i+1);
                }
                else {
                    break;
                }
            }
        }
        return cnt;
    }
};