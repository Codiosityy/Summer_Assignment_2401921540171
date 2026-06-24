class Solution {
public:
    // Inorder traversal: left subtree, node, right subtree.
    // Time: O(n), Space: O(h)
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }

private:
    void inorder(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }

        inorder(node->left, result);
        result.push_back(node->val);
        inorder(node->right, result);
    }
};
