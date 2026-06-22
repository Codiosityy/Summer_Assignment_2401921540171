class Solution {
public:
    // Depth-first recursion:
    // The maximum depth of a tree is 1 + the maximum depth of its left and right subtrees.
    // Time: O(n), Space: O(h)
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
