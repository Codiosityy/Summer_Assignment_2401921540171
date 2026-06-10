class Solution {
public:
    // Check each possible starting position and compare characters directly.
    // Time: O((n - m + 1) * m), Space: O(1)
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if (m == 0) {
            return 0;
        }

        if (m > n) {
            return -1;
        }

        for (int start = 0; start <= n - m; start++) {
            int j = 0;

            while (j < m && haystack[start + j] == needle[j]) {
                j++;
            }

            if (j == m) {
                return start;
            }
        }

        return -1;
    }
};
