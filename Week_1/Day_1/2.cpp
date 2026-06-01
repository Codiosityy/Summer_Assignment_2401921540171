class Solution {
public:
    // Two-pointer technique: `read` scans the array, `write` overwrites
    // duplicates in-place. Single pass with constant extra space.
    // Time: O(n), Space: O(1)
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int write = 1;

        for (int read = 1; read < nums.size(); read++) {
            if (nums[read] != nums[read - 1]) {
                nums[write] = nums[read];
                write++;
            }
        }

        return write;
    }
};
