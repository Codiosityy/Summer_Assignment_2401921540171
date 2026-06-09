class Solution {
public:
    // Sliding window with frequency counts.
    // Expand the window over s2, and shrink it whenever a character count goes negative.
    // If the window size matches s1.size(), a permutation exists.
    // Time: O(n), Space: O(1)
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }

        int freq[26] = {0};
        for (char c : s1) {
            freq[c - 'a']++;
        }

        int left = 0;
        for (int right = 0; right < static_cast<int>(s2.size()); right++) {
            freq[s2[right] - 'a']--;

            while (freq[s2[right] - 'a'] < 0) {
                freq[s2[left] - 'a']++;
                left++;
            }

            if (right - left + 1 == static_cast<int>(s1.size())) {
                return true;
            }
        }

        return false;
    }
};
