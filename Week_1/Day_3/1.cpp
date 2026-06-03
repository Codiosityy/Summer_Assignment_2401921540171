class Solution {
public:
    // Two pointers:
    // Place each non-zero element at the next available position
    // and move all zeros to the end in-place.
    // Time: O(n), Space: O(1)
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;

        for (int current = 0; current < nums.size(); current++) {
            if (nums[current] != 0) {
                swap(nums[current], nums[insertPos]);
                insertPos++;
            }
        }
    }
};
