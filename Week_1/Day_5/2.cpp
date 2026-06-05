class Solution {
public:
    // Two pointers swap characters from both ends toward the center.
    // Time: O(n), Space: O(1)
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = static_cast<int>(s.size()) - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
