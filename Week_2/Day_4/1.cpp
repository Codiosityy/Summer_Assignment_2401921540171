class Solution {
public:
    // Reverse each word in place while keeping spaces unchanged.
    // Time: O(n), Space: O(1)
    string reverseWords(string s) {
        int n = static_cast<int>(s.size());
        int left = 0;

        while (left < n) {
            while (left < n && s[left] == ' ') {
                left++;
            }

            int right = left;
            while (right < n && s[right] != ' ') {
                right++;
            }

            reverse(s.begin() + left, s.begin() + right);
            left = right;
        }

        return s;
    }
};
