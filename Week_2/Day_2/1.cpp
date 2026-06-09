class Solution {
public:
    // Sliding window with last seen positions for each ASCII character.
    // Time: O(n), Space: O(1)
    int lengthOfLongestSubstring(string s) {
        int last[128] = {0};  // last seen index + 1
        int left = 0;
        int best = 0;

        for (int right = 0; right < static_cast<int>(s.size()); right++) {
            unsigned char ch = static_cast<unsigned char>(s[right]);
            left = max(left, last[ch]);
            last[ch] = right + 1;
            best = max(best, right - left + 1);
        }

        return best;
    }
};
