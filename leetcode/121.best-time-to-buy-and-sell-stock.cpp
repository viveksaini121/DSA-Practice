/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start


class Solution {
public:
    int maxProfit(vector<int>& prices) {
                int profit = 0;
                int min_price = prices[0];
        for (int i=0; i<prices.size()-1; i++){
            if (prices[i]<min_price)
                min_price = prices[i];
            if (prices[i+1]-min_price >= profit)
                profit = prices[i+1]-min_price;
                }
        
            return profit;
    }
};
// @lc code=end

