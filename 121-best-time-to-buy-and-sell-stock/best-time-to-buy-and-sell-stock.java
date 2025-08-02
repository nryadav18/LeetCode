class Solution {
    public int maxProfit(int[] prices) {
        int size = prices.length, minValue = prices[0], maxPrice = 0;
        for (int eachNum : prices){
            int profit = eachNum - minValue;
            if (profit > maxPrice) maxPrice = profit;
            if (minValue > eachNum) minValue = eachNum;
        }
        return maxPrice;
    }
}