class Solution {
public:
    // Depth-first search:
    // For each node, compute the maximum gain from either subtree.
    // Update the global maximum path sum using the current node as the highest point.
    // Time: O(n), Space: O(h)
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxGain(root, maxSum);
        return maxSum;
    }

private:
    int maxGain(TreeNode* node, int& maxSum) {
        if (node == nullptr) {
            return 0;
        }

        int leftGain = max(0, maxGain(node->left, maxSum));
        int rightGain = max(0, maxGain(node->right, maxSum));

        maxSum = max(maxSum, node->val + leftGain + rightGain);

        return node->val + max(leftGain, rightGain);
    }
};
