#include <vector>
#include <unordered_map>
#include <random>

class RandomizedSet {
public:
    std::unordered_map<int, int> map;   // Maps value to its index in vector
    std::vector<int> v;                 // Stores the actual values

    RandomizedSet() {
        // Constructor doesnt need anything, vector and map 
        // initialized by default
    }
    
    bool insert(int val) {
        if (map.count(val)) {
            // value is already in set, insertion not possible
            return false;
        }
        map[val] = v.size();            // Map value to it's index in v
        v.push_back(val);               // Add value to the end of v
        return true;
    }
    
    bool remove(int val) {
        if (!map.count(val)) {
            // value is not in set, removing not possible
            return false;
        }

        int index = map[val];           // Get index of element to remove
        map[v.back()] = index;          // Map last element's index to the index of the one to be removed
        v[index] = v.back();            // Replace the element to remove with the last element
        v.pop_back();                   // Remove last element
        map.erase(val);                 // Remove element from map

        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];    // Return random element by index
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

int main(void) {
    RandomizedSet rs;
}
