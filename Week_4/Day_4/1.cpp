class Solution {
public:
    // Depth-first search:
    // Subtract each node's value from the target sum.
    // A valid path exists if a leaf node is reached with the remaining sum equal to its value.
    // Time: O(n), Space: O(h)
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }

        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val;
        }

        int remainingSum = targetSum - root->val;

        return hasPathSum(root->left, remainingSum) ||
               hasPathSum(root->right, remainingSum);
    }
};
