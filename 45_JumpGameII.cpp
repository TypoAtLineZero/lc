#include <vector>

class Solution {
public:
    bool canJump(std::vector<int>& nums) {
    int maxReach = 0; // Tracks the farthest index you can reach
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        if (i > maxReach) {
            // If the current index is beyond the farthest reachable index, you're stuck
            return false;
        }
        maxReach = std::max(maxReach, i + nums[i]); // Update the farthest reachable index
        if (maxReach >= n - 1) {
            // If we can reach or exceed the last index, return true
            return true;
        }
    }
    return false; // If we exit the loop without returning, we cannot reach the end
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {1,2,4};

    n.canJump(nums);
}
