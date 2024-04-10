class Solution {
public:
    bool isPalindrome(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        for (int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
        string raj;
        for (int i=0;i<s.length();i++){
            if (isalpha(s[i]) or isdigit(s[i])){
                raj+=s[i];
            }
        }
        int i=0;
        int j=raj.length()-1;
        while (i<j){
            if (raj[i]!=raj[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};