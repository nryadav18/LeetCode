class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string raj;
        int n = s.length(), j = 0, m = spaces.size();
        for (int i=0;i<n;i++){
            if(j < m and i == spaces[j]){
                raj += ' ';
                j++;
            }
            raj += s[i];
        }
        return raj;
    }
};