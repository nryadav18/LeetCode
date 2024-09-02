class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        int mod = 1e9+7;
        for (int i=0;i<chalk.size();i++){
            sum = (sum+chalk[i]);
        }
        while (k >= sum){
            k -= sum;
        }
        cout << k << endl;
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