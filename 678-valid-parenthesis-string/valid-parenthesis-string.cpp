class Solution {
public:
    bool checkValidString(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.length();
        int openCount = 0 , closeCount = 0;
        for (int i = 0 ; i < n ; i++){
            if (s[i] == ')'){
                closeCount++;
            }
            else{
                openCount++;
            }
            if (closeCount > openCount){
                return false;
            }
        }
        if (openCount == closeCount){
            return true;
        }
        openCount = 0 , closeCount = 0;
        for (int i = n - 1 ; i >= 0 ; i--){
            if (s[i] == '('){
                openCount++;
            }
            else{
                closeCount++;
            }
            if (openCount > closeCount){
                return false;
            }
        }
        return true;
    }
};