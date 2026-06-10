class Solution {
public:
    // Two pointers:
    // Scan t and advance through s whenever matching characters are found.
    // Time: O(n), Space: O(1)
    bool isSubsequence(string s, string t) {
        int j = 0;

        for (int i = 0; i < static_cast<int>(t.size()) && j < static_cast<int>(s.size()); i++) {
            if (s[j] == t[i]) {
                j++;
            }
        }

        return j == static_cast<int>(s.size());
    }
};
