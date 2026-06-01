class Solution {
public:
    // Single pass: track the minimum price seen so far and the best
    // profit achievable by selling on the current day.
    // Time: O(n), Space: O(1)
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int bestProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            bestProfit = max(bestProfit, price - minPrice);
        }

        return bestProfit;
    }
};
