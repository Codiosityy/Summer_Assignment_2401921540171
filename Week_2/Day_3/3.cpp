class Solution {
public:
    // Build the LPS array using KMP.
    // If the string is made of repeated substrings, the last LPS value
    // helps determine the repeating unit length.
    // Time: O(n), Space: O(n)
    bool repeatedSubstringPattern(string s) {
        int n = static_cast<int>(s.size());
        if (n < 2) {
            return false;
        }

        vector<int> lps(n, 0);
        int len = 0;

        for (int i = 1; i < n; i++) {
            while (len > 0 && s[i] != s[len]) {
                len = lps[len - 1];
            }

            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
            }
        }

        int longestPrefixSuffix = lps[n - 1];
        int patternLength = n - longestPrefixSuffix;

        return longestPrefixSuffix > 0 && n % patternLength == 0;
    }
};
