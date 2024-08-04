class Solution {
public:
    int countSeniors(vector<string>& details) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = details.size(), cnt = 0;
        for (int i=0;i<n;i++){
            int val = (details[i][11] - '0')*10 + (details[i][12] - '0');
            if (val > 60){
                cnt++;
            }
        }
        return cnt;
    }
};