class Solution {
public:
    // Use a hash set to track seen elements.
    // If an element is already present, a duplicate exists.
    // Time: O(n), Space: O(n)
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};
