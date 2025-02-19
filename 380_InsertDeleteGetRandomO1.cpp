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

/*
Implement the RandomizedSet class:

    RandomizedSet() Initializes the RandomizedSet object.
    bool insert(int val) Inserts an item val into the set if not present. Returns true if the item was not present, false otherwise.
    bool remove(int val) Removes an item val from the set if present. Returns true if the item was present, false otherwise.
    int getRandom() Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the same probability of being returned.

You must implement the functions of the class such that each function works in average O(1) time complexity.

 

Example 1:

Input
["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
[[], [1], [2], [2], [], [1], [2], []]
Output
[null, true, false, true, 2, true, false, 2]

Explanation
RandomizedSet randomizedSet = new RandomizedSet();
randomizedSet.insert(1); // Inserts 1 to the set. Returns true as 1 was inserted successfully.
randomizedSet.remove(2); // Returns false as 2 does not exist in the set.
randomizedSet.insert(2); // Inserts 2 to the set, returns true. Set now contains [1,2].
randomizedSet.getRandom(); // getRandom() should return either 1 or 2 randomly.
randomizedSet.remove(1); // Removes 1 from the set, returns true. Set now contains [2].
randomizedSet.insert(2); // 2 was already in the set, so return false.
randomizedSet.getRandom(); // Since 2 is the only number in the set, getRandom() will always return 2.
*/
