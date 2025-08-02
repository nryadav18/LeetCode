class Solution {
    public int maxProfit(int[] prices) {
        int size = prices.length, minValue = prices[0], maxPrice = 0;
        for (int eachNum : prices){
            int profit = eachNum - minValue;
            maxPrice = Math.max(profit,maxPrice);
            minValue = Math.min(minValue,eachNum);
        }
        return maxPrice;
    }
}