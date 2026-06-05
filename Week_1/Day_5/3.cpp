class Solution {
public:
    // Compare characters vertically across all strings until a mismatch appears.
    // Time: O(n * m), Space: O(1)
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string prefix;
        int minLen = strs[0].size();

        for (const string& str : strs) {
            minLen = min(minLen, static_cast<int>(str.size()));
        }

        for (int i = 0; i < minLen; i++) {
            char ch = strs[0][i];
            for (const string& str : strs) {
                if (str[i] != ch) {
                    return prefix;
                }
            }
            prefix += ch;
        }

        return prefix;
    }
};
