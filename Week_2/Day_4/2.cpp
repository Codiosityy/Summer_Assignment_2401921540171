class Solution {
public:
    // Use two stacks to track repeat counts and previously built strings.
    // When we see '[', save the current state; when we see ']', expand the current segment.
    // Time: O(n), Space: O(n)
    string decodeString(string s) {
        stack<int> counts;
        stack<string> strings;
        string current;
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            } else if (ch == '[') {
                counts.push(num);
                strings.push(current);
                num = 0;
                current.clear();
            } else if (ch == ']') {
                int repeat = counts.top();
                counts.pop();

                string previous = strings.top();
                strings.pop();

                string expanded;
                expanded.reserve(previous.size() + current.size() * repeat);
                for (int i = 0; i < repeat; i++) {
                    expanded += current;
                }

                current = previous + expanded;
            } else {
                current.push_back(ch);
            }
        }

        return current;
    }
};
