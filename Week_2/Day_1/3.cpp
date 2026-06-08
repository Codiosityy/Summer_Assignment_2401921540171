class Solution {
public:
    // Count available letters in magazine and consume them for ransomNote.
    // Time: O(n + m), Space: O(1)
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        for (char c : magazine) {
            freq[c - 'a']++;
        }

        for (char c : ransomNote) {
            if (--freq[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
