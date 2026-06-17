class Solution {
public:
    // Monotonic decreasing stack:
    // Traverse nums2 from left to right and record the next greater element
    // for each value using a hash map.
    // Time: O(n + m), Space: O(n)
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;

        for (int num : nums2) {
            while (!st.empty() && num > st.top()) {
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        vector<int> result;
        result.reserve(nums1.size());

        for (int num : nums1) {
            auto it = nextGreater.find(num);
            result.push_back(it == nextGreater.end() ? -1 : it->second);
        }

        return result;
    }
};
