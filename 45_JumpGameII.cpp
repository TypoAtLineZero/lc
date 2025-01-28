#include <vector>

class Solution {
public:
    int jump(std::vector<int>& nums) {    
        int numJumps = 0;           // Number of jumps made.
        int currentMaxReach = 0;    // Max index we can reach with the current number of jumps.
        int lastMaxReach = 0;       // Max index we can reach from the last jump.
        // Iterate over each element in the array except the last one.
        for (int i = 0; i < nums.size() - 1; ++i) {
            // Update the furthest index we can reach from here.
            currentMaxReach = max(currentMaxReach, i + nums[i]);
            if (lastMaxReach == i) {
                numJumps++;
                lastMaxReach = currentMaxReach;  // Update the max reach for the new jump.
            }
        }
        return numJumps;  // Return the total number of jumps made to reach the end.
    }
};
int main(void) {
    Solution n;
    std::vector<int> nums = {1,2,4};

    n.canJump(nums);
}
