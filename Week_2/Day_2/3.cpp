class Solution {
public:
    // Sliding window with character frequency counts.
    // Maintain a window of size p.size() and compare frequencies as the window slides.
    // Time: O(n), Space: O(1)
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int n = s.size(), m = p.size();

        if (m > n) {
            return result;
        }

        int freqP[26] = {0};
        int freqW[26] = {0};

        for (int i = 0; i < m; i++) {
            freqP[p[i] - 'a']++;
            freqW[s[i] - 'a']++;
        }

        if (memcmp(freqP, freqW, sizeof(freqP)) == 0) {
            result.push_back(0);
        }

        for (int right = m; right < n; right++) {
            freqW[s[right] - 'a']++;
            freqW[s[right - m] - 'a']--;

            if (memcmp(freqP, freqW, sizeof(freqP)) == 0) {
                result.push_back(right - m + 1);
            }
        }

        return result;
    }
};
