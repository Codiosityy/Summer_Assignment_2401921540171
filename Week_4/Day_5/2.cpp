class Solution {
public:
    // Reconstruct the tree using preorder to identify the root
    // and inorder to split the left and right subtrees.
    // Time: O(n), Space: O(n)
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorderIndex;

        for (int i = 0; i < static_cast<int>(inorder.size()); i++) {
            inorderIndex[inorder[i]] = i;
        }

        int preorderIndex = 0;
        return build(preorder, 0, static_cast<int>(inorder.size()) - 1,
                     preorderIndex, inorderIndex);
    }

private:
    TreeNode* build(vector<int>& preorder,
                    int left,
                    int right,
                    int& preorderIndex,
                    unordered_map<int, int>& inorderIndex) {
        if (left > right) {
            return nullptr;
        }

        int rootValue = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootValue);

        int inorderPos = inorderIndex[rootValue];

        root->left = build(preorder, left, inorderPos - 1,
                           preorderIndex, inorderIndex);

        root->right = build(preorder, inorderPos + 1, right,
                            preorderIndex, inorderIndex);

        return root;
    }
};
