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
            if (price < buy) {
                buy = price;
            } else {
                int current_profit = price - buy;
                if (current_profit > profit) {
                    profit = current_profit;
                }
            }
        }
        std::cout << profit << std::endl;
        return profit;
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {7,1,5,3,6,4};

    n.maxProfit(nums);
}
