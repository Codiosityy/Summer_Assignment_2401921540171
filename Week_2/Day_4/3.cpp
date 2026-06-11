class Solution {
private:
    // Backtracking:
    // Add '(' while available and ')' only when it keeps the sequence valid.
    // Time: O(Cn * n), Space: O(n)
    void backtrack(vector<string>& result,
                   string& current,
                   int openCount,
                   int closeCount,
                   int n) {
        if (openCount == n && closeCount == n) {
            result.push_back(current);
            return;
        }

        if (openCount < n) {
            current.push_back('(');
            backtrack(result, current, openCount + 1, closeCount, n);
            current.pop_back();
        }

        if (closeCount < openCount) {
            current.push_back(')');
            backtrack(result, current, openCount, closeCount + 1, n);
            current.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;

        backtrack(result, current, 0, 0, n);

        return result;
    }
};
