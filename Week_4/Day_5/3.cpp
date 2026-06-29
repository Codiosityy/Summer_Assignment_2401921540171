class Codec {
public:
    // Serialize the tree using preorder traversal.
    // Use "#" to represent null nodes so the tree can be reconstructed uniquely.
    // Time: O(n), Space: O(n)
    string serialize(TreeNode* root) {
        string result;
        serializeHelper(root, result);
        return result;
    }

    // Deserialize the preorder representation to reconstruct the tree.
    // Time: O(n), Space: O(n)
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserializeHelper(ss);
    }

private:
    void serializeHelper(TreeNode* node, string& result) {
        if (node == nullptr) {
            result += "#,";
            return;
        }

        result += to_string(node->val) + ",";
        serializeHelper(node->left, result);
        serializeHelper(node->right, result);
    }

    TreeNode* deserializeHelper(stringstream& ss) {
        string value;
        getline(ss, value, ',');

        if (value == "#") {
            return nullptr;
        }

        TreeNode* node = new TreeNode(stoi(value));
        node->left = deserializeHelper(ss);
        node->right = deserializeHelper(ss);

        return node;
    }
};
