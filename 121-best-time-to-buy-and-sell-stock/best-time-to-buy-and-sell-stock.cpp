class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = prices.size();
        vector<int>buy(n,-1);
        int mini = INT_MAX;
        bool flag = false;
        for (int i = 0 ; i < n ; i++){
            if (prices[i] < mini){
                mini = prices[i];
            }
            buy[i] = mini;
            if (!flag){
                if (i != n-1 and prices[i] < prices[i+1]){
                    flag = true;
                }
            }
        }
        if (!flag){
            return 0;
        }
        int val = 0;
        for (int i = 0 ; i < n ; i++){
            if (buy[i] < prices[i]){
                int diff = prices[i] - buy[i];
                if (val < diff){
                    val = diff;
                }
            }
        }
        return val;
    }
};