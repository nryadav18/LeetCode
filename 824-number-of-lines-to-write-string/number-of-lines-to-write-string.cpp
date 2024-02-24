class Solution {
public:
    vector<int> numberOfLines(vector<int>& v, string s) {
        int line = 1 , tot = 0;
        for (auto it : s){
            int val = v[it-'a'];
            if (tot + val > 100){
                line++;
                tot = val;
            }
            else{
                tot += val;
            }
        }
        return {line,tot};
    }
};