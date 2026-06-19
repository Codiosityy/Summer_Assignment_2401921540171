class RecentCounter {
private:
    queue<int> calls;

public:
    // Maintain a queue of calls within the last 3000 ms.
    // Remove timestamps that are too old, then return the current queue size.
    // Time: Amortized O(1), Space: O(n)
    RecentCounter() {}

    int ping(int t) {
        calls.push(t);

        while (!calls.empty() && calls.front() < t - 3000) {
            calls.pop();
        }

        return static_cast<int>(calls.size());
    }
};
