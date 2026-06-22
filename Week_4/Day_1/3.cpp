class Solution {
public:
    // Recursively compare both trees node by node.
    // If both nodes are null, they match.
    // If only one is null or values differ, they do not match.
    // Time: O(n), Space: O(h)
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }

        if (p == nullptr || q == nullptr) {
            return false;
        }

        if (p->val != q->val) {
            return false;
        }

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
