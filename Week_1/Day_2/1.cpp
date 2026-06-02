class Solution {
public:
    // Kadane's Algorithm:
    // At each index, either start a new subarray or extend the current one.
    // Time: O(n), Space: O(1)
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSubarraySum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSubarraySum = max(maxSubarraySum, currentSum);
        }

        return maxSubarraySum;
    }
};
