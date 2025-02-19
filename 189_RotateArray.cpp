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

/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/
