class Solution {
public:
    // Breadth-first search:
    // Traverse level by level, reversing the order of values on every other level.
    // Time: O(n), Space: O(n)
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr) {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int levelSize = static_cast<int>(q.size());
            vector<int> level(levelSize);

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                int index = leftToRight ? i : (levelSize - 1 - i);
                level[index] = node->val;

                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }

            result.push_back(level);
            leftToRight = !leftToRight;
        }

        return result;
    }
};
