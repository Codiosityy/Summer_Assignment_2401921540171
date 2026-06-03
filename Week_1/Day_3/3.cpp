class Solution {
public:
    // Two pointers:
    // Compute the area between the left and right lines.
    // Move the pointer with the smaller height, since it limits the area.
    // Time: O(n), Space: O(1)
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int currentArea =
                (right - left) * min(height[left], height[right]);

            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};
