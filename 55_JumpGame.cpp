#include <vector>

class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int jumpSize = nums[0];
        if (nums.size() == 1) {
            return true;
        }

        for (int i = 0; i < nums.size() - 1; ++i) {
            if (jumpSize >= nums.size() - 1) {
                return true;
            } else {
                jumpSize += nums[i];
                i += nums[i];
            }
        }
        return false;
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {1,2,4};

    n.canJump(nums);
}
