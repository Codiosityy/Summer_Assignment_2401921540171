class Solution {
public:
    // Compute the height of each subtree while updating the maximum diameter.
    // The diameter through a node is the sum of the heights of its left and right subtrees.
    // Time: O(n), Space: O(h)
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    int height(TreeNode* node, int& diameter) {
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = height(node->left, diameter);
        int rightHeight = height(node->right, diameter);

        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }
};
