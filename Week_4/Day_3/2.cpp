class Solution {
public:
    // Recursively enforce valid value bounds for each subtree.
    // Every node must be strictly greater than all values in the left subtree
    // and strictly smaller than all values in the right subtree.
    // Time: O(n), Space: O(h)
    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }

private:
    bool validate(TreeNode* node, long long low, long long high) {
        if (node == nullptr) {
            return true;
        }

        if (node->val <= low || node->val >= high) {
            return false;
        }

        return validate(node->left, low, node->val) &&
               validate(node->right, node->val, high);
    }
};
