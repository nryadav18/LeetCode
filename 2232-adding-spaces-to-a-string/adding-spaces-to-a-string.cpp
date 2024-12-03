class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.length(), m = spaces.size(), j = 0;
        string raj(n+m, ' ');
        for (int i=0;i<n;i++){
            if(j < m and i == spaces[j]){
                raj[i+j] = ' ';
                j++;
            }
            raj[i+j] = s[i];
        }
        return raj;
    }
};