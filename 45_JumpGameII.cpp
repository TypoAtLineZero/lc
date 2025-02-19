// Solution explained: https://algo.monster/liteproblems/45

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

/*
You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:

    0 <= j <= nums[i] and
    i + j < n

Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

Example 2:

Input: nums = [2,3,0,1,4]
Output: 2
*/
