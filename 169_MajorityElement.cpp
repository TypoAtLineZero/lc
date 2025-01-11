#include <unordered_map>
#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); ++i) {
            if (umap.find(nums[i]) == umap.end()) {
                
            } 
        }
    }
};

int main(void) {
    Solution n;
    std::vector<int> nums = {1,2,1};

    n.majorityElement(nums);
}
