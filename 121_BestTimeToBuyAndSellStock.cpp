#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.size() < 2) {
            return 0;
        }

        int buy = prices[0];
        int profit = 0;
        for (int price : prices) {
            // Range based 
            std::cout << price << std::endl;
            if (price < buy) {
                buy = price;
            } else {
                int current_profit = price - buy;
                if (current_profit > profit) {
                    profit = current_profit;
                }
            }
        }
        return profit;
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {1,2,4};

    n.maxProfit(nums);
}

/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
*/
