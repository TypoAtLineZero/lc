#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int>::iterator it;
        for (it = nums.begin(); it != nums.end();) {
            if (*it == val) {
                nums.erase(it);
            } else {
                ++it;
            }
        }
    }
};

int main(void) {
    std::vector<int> vec = {3, 2, 2, 3};
    int n = 3;
    Solution sol;

    sol.removeElement(vec, n);
    return 0;
}
