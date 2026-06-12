class Solution {
public:
    // Expand around each possible center and keep the longest palindrome found.
    // Time: O(n^2), Space: O(1)
    string longestPalindrome(string s) {
        int n = static_cast<int>(s.size());
        if (n < 2) {
            return s;
        }

        int bestStart = 0;
        int bestLen = 1;

        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }

            int len = right - left - 1;
            if (len > bestLen) {
                bestLen = len;
                bestStart = left + 1;
            }
        };

        for (int i = 0; i < n; i++) {
            expand(i, i);       // Odd-length palindrome
            expand(i, i + 1);   // Even-length palindrome
        }

        return s.substr(bestStart, bestLen);
    }
};
