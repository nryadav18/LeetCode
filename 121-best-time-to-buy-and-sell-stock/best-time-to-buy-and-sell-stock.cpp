class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>raj(prices.size(),0);
        int maxi = INT_MIN;
        for (int i=prices.size()-1;i>=0;i--){
            maxi = max(maxi,prices[i]);
            raj[i] = maxi;
        }
        int maxProfit = 0;
        for (int i=0;i<prices.size();i++){
            maxProfit = max(maxProfit,raj[i]-prices[i]);
        }
        return maxProfit;
    }
};