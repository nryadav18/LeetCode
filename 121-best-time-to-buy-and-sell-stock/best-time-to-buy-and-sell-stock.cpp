class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = prices.size();
        int buy = INT_MAX;
        int val = 0;
        int diff = 0;
        for (int i = 0 ; i < n ; i++){
            if  (buy > prices[i]){
                buy = prices[i];
            }
            if (prices[i] > buy){
                diff = prices[i] - buy;
            }
            if (val < diff){
                val = diff;
            }
        }
        return val;
    }
};