#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.size() <= 2) {
            return 0;
        }

        int sell;
        int buy;
        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] > prices[i + 1]) {
                continue;
            } 
            if (prices[i] < buy) {
                buy = prices[i]; 
            }
            if (prices[i] > sell) {
                sell = prices[i];
            }
        }
        std::cout << buy << std::endl;
        std::cout << sell << std::endl;
        return sell - buy;
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {7,1,5,3,6,4};

    n.maxProfit(nums);
}
