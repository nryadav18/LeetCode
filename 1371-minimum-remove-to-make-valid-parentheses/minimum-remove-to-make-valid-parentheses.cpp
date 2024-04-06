class Solution {
public:
    string minRemoveToMakeValid(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.length();
        int i = 0;
        int openCount = 0 , closeCount = 0;
        while (i < n){
            if (s[i] == '('){
                openCount++;
            }
            else if (s[i] == ')'){
                if (openCount == 0){
                    s[i] = '#';
                }
                else{
                    openCount--;
                }
            }
            i++;
        }
        i = n - 1;
        while (i >= 0){
            if (openCount >= 1 and s[i] == '('){
                s[i] = '#';
                openCount--;
            }
            i--;
        }
        string res;
        i = 0;
        while (i < n){
            if (s[i] != '#'){
                res += s[i];
            }
            i++;
        }
        return res;
    }
};