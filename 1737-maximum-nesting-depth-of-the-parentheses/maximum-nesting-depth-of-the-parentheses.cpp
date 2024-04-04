class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int cnt = 0;
        int i = 0;
        int n = s.length();
        while(i<n){
            if (s[i] == '('){
                cnt++;
                if (cnt > maxi){
                    maxi = cnt;
                }
            }
            else if (s[i] == ')'){
                cnt--;
            }
            i++;
        } 
        return maxi;
    }
};