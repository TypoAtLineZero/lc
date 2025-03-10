class Solution {
public:
    if (height.empty()) return 0; // Edge case

    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int waterTrapped = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            // Process the left side
            if (height[left] >= leftMax) {
                leftMax = height[left]; // Update left max
            } else {
                waterTrapped += leftMax - height[left]; // Add trapped water
            }
            left++;
        } else {
            // Process the right side
            if (height[right] >= rightMax) {
                rightMax = height[right]; // Update right max
            } else {
                waterTrapped += rightMax - height[right]; // Add trapped water
            }
            right--;
        }
    }

    return waterTrapped;
}

/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Example 1:

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
*/
