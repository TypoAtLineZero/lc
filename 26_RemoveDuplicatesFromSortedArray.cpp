#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[k] != nums[i]) {
                ++k;
                nums[k] = nums[i];
            }
        }
        return k + 1;
    }
};

int main(void) {
    std::vector<int> nums1 = {0,0,1,1,1,2,2,3,3,4};

    Solution one;
    one.removeDuplicates(nums1);
}
