class MinStack {
private:
    std::stack<int> values;
    std::stack<int> minStack;

public:
    MinStack() {}

    // Push the value and also track the minimum seen so far.
    // Time: O(1), Space: O(1) per operation
    void push(int val) {
        values.push(val);

        if (minStack.empty()) {
            minStack.push(val);
        } else {
            minStack.push(std::min(val, minStack.top()));
        }
    }

    void pop() {
        values.pop();
        minStack.pop();
    }

    int top() {
        return values.top();
    }

    int getMin() {
        return minStack.top();
    }
};
