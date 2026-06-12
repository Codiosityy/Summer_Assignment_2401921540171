class Solution {
public:
    // Two pointers:
    // Count consecutive occurrences of each character and write the
    // compressed form back into the array in-place.
    // Time: O(n), Space: O(1)
    int compress(vector<char>& chars) {
        int write = 0;
        int read = 0;
        int n = static_cast<int>(chars.size());

        while (read < n) {
            char currentChar = chars[read];
            int count = 0;

            while (read < n && chars[read] == currentChar) {
                read++;
                count++;
            }

            chars[write++] = currentChar;

            if (count > 1) {
                string countStr = to_string(count);

                for (char digit : countStr) {
                    chars[write++] = digit;
                }
            }
        }

        return write;
    }
};
