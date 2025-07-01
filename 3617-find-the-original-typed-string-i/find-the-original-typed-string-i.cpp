class Solution {
public:
    int possibleStringCount(string word) {
        int cnt = 1, n = word.length(), chCount = 0;
        char ch = '#';
        for (int i=n-1;i>=0;i--){
            if (ch == '#'){
                ch = word[i];
                chCount++;
            }
            else if (ch != word[i]){
                cnt += chCount - 1;
                chCount = 1;
                ch = word[i];
            }
            else{
                chCount++;
            }
        }
        if (chCount > 1) cnt += chCount - 1;
        return cnt;
    }
};