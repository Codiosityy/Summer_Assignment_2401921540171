class Solution {
public:
    // Recursively compare the left and right subtrees as mirror images.
    // Time: O(n), Space: O(h)
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        return isMirror(root->left, root->right);
    }

private:
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) {
            return true;
        }

        if (left == nullptr || right == nullptr) {
            return false;
        }

        if (left->val != right->val) {
            return false;
        }

        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }
};
