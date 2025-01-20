#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.size() < 2) {
            return 0;
        }

        int totalProfit = 0;
        for (size_t i = 1; i < prices.size(); ++i) {
            // Accumulate profit if today's price is higher than yesterday's
            if (prices[i] > prices[i - 1]) {
                totalProfit += prices[i] - prices[i - 1];
            }
        }
        return totalProfit;
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {7,1,5,3,6,4};

    n.maxProfit(nums);
}
