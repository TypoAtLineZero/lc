#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // to handle cases where k > n

        std::vector<int> temp(n);
        for (int i = 0; i < n; ++i) {
            temp[(i + k) % n] = nums[i];
        }

        nums = temp;
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {1,2,1};
    int k = 2;

    n.rotate(nums, k);
}
