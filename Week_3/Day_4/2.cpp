class Solution {
public:
    // Evaluate Reverse Polish Notation using a stack.
    // Push operands; when an operator appears, pop two values,
    // apply the operation, and push the result back.
    // Time: O(n), Space: O(n)
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int right = st.top();
                st.pop();

                int left = st.top();
                st.pop();

                if (token == "+") st.push(left + right);
                else if (token == "-") st.push(left - right);
                else if (token == "*") st.push(left * right);
                else st.push(left / right);
            } else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};
