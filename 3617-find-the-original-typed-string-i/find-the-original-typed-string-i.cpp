class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.length(), cnt = 1;
        for (int i=0;i<n;i++) if (word[i] == word[i+1]) cnt++;
        return cnt;
    }
};