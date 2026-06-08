class Solution {
public:
    // Count character frequencies for both strings and compare them.
    // Time: O(n), Space: O(1)
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int chars[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            chars[s[i] - 'a']++;
            chars[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (chars[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
