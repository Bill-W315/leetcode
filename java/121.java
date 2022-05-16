/*
Time: n
Space: 1
*/
class Solution {
    public int maxProfit(int[] prices) {
        int lowestPrice = prices[0];
        int profit = 0,maxProfit = 0;
        for(int price : prices){
            if(price < lowestPrice){
                lowestPrice = price;
            }
            profit = price - lowestPrice;
            if(profit > maxProfit){
                maxProfit = profit;
            }
            
        }
        return maxProfit;
    }
}