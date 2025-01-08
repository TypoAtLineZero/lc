#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0;
        std::vector<int>::iterator it;
        for (it = nums.begin(); it != nums.end(); it++) {
            if (*it == val) {
                nums.erase(it);
            }
        }
        k = nums.size();
        return k;
    }
};
