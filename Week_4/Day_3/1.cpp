class Solution {
public:
    // Use the BST property:
    // if the target is smaller, go left; otherwise, go right.
    // Time: O(h), Space: O(h) recursively, where h is tree height.
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) {
            return root;
        }

        if (val < root->val) {
            return searchBST(root->left, val);
        }

        return searchBST(root->right, val);
    }
};
