class Solution {
public:
    // Use the BST property:
    // if both nodes are smaller, go left; if both are larger, go right;
    // otherwise, current node is the lowest common ancestor.
    // Time: O(h), Space: O(1)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int pVal = p->val;
        int qVal = q->val;

        while (root != nullptr) {
            if (pVal < root->val && qVal < root->val) {
                root = root->left;
            } else if (pVal > root->val && qVal > root->val) {
                root = root->right;
            } else {
                return root;
            }
        }

        return nullptr;
    }
};
