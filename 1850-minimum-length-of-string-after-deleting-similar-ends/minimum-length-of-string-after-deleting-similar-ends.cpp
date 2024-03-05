class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j){
            if (s[i] == s[j]){
                while (s[i] == s[i+1] and i<j) i++;
                while (s[j] == s[j-1] and j>i) j--;
            }
            else{
                break;
            }
            i++;
            j--;
        }
        if (j-i+1 < 0) return 0;
        return j-i+1; 
    }
};