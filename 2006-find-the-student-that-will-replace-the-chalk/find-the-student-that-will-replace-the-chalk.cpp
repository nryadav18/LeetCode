class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        long long sum = 0;
        int mod = 1e9+7;
        for (int i=0;i<chalk.size();i++){
            sum = (sum+chalk[i]);
        }
        k %= sum;
        if (k == 0) return 0;
        for (int i=0;i<chalk.size();i++){
            if (k < chalk[i]){
                return i;
            }
            k -= chalk[i];
        }
        return -1;
    }
};