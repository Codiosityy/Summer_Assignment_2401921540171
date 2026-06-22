class Solution {
public:
    // Recursively swap the left and right children of every node.
    // Time: O(n), Space: O(h)
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
