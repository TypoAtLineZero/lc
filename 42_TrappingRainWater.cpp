class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int currentLevel = 0;
        int waterTrapped = 0;
        bool valid = false;

        for (int i = 0; i < n; ++i) {
            // Checking for empty fields, which cannot trap water
             if (height[i] < 1 && valid == false) {
                continue;
             } else {
                valid = true;
             }

            // From here, water can be contained
            if (currentLevel <= height[i] && valid == true) {
                currentLevel = height[i];
            } else {
                waterTrapped += currentLevel - height[i];
            }
        }

        return waterTrapped;
    }
};

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
