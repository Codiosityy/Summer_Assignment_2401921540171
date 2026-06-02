class Solution {
public:
    // Sliding window:
    // Maintain the sum of a window of size k and track the maximum sum seen.
    // Time: O(n), Space: O(1)
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        int maxWindowSum = windowSum;

        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i] - nums[i - k];
            maxWindowSum = max(maxWindowSum, windowSum);
        }

        return (double)maxWindowSum / k;
    }
};
