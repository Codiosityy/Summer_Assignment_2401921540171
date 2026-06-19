class Solution {
public:
    // Monotonic increasing stack of indices.
    // For each bar, when a shorter bar appears, compute areas using the popped bars
    // as the limiting height.
    // Time: O(n), Space: O(n)
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int n = static_cast<int>(heights.size());

        for (int i = 0; i <= n; i++) {
            int currentHeight = (i == n) ? 0 : heights[i];

            while (!st.empty() && currentHeight < heights[st.top()]) {
                int height = heights[st.top()];
                st.pop();

                int leftBoundary = st.empty() ? -1 : st.top();
                int width = i - leftBoundary - 1;

                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }
};
