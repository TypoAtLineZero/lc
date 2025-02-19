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

/*
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
*/
