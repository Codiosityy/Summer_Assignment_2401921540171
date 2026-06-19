class Solution {
public:
    // Monotonic decreasing stack of indices.
    // Traverse from right to left and find the next warmer day.
    // Time: O(n), Space: O(n)
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = static_cast<int>(temperatures.size());
        stack<int> st;  // stores indices
        vector<int> answer(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            if (!st.empty()) {
                answer[i] = st.top() - i;
            }

            st.push(i);
        }

        return answer;
    }
};
