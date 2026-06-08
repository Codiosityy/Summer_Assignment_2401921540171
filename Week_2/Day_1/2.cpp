class Solution {
public:
    // Count character frequencies, then scan again to find the first unique character.
    // Time: O(n), Space: O(1)
    int firstUniqChar(string s) {
        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'a']++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};
