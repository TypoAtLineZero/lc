#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // Solution 1
        //int k = 0;
        //for (int i = 0; i < nums.size(); ++i) {
        //    if (i < 2 || nums[i] != nums[k - 2]) {
        //        nums[k++] = nums[i];
        //    }
        //}
        //return k;

        // Solution 2
        int j = 1;
        int count = 1;
        int n = nums.size();

        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i - 1]) {
                count += 1;
            } else {
                count = 1;
            }

            if (count <= 2) {
                nums[j] = nums[i];
                j += 1;
            }
        }
        return j;
    }
};       

int main(void) {
    std::vector<int> nums1 = {1,1,2,2,2,3};

    Solution one;
    one.removeDuplicates(nums1);
}
