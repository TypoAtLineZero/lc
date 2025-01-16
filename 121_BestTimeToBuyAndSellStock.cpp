#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.size() < 2) {
            return 0;
        }

        int buy = prices[0];
        int sell = prices[1];
        int profit = 0;
        bool isDecreasing = true;
        for (int i = 0; i < prices.size(); ++i) {
            std::cout << i << std::endl;
            if (prices[i] <= prices[i + 1]) {
                // Found increasing price
                isDecreasing = false;
            } 
            if (prices[i] < buy) {
                buy = prices[i];
                profit = sell - buy;
            }
            if (prices[i] - buy > profit) {
                sell = prices[i];
            }
        }
        if (isDecreasing) {
            return 0;
        }
        profit = sell - buy;
        return profit;
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {1,2,4};

    n.maxProfit(nums);
}
