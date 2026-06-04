class Solution {
public:
    // Directly map each element from the original matrix to the reshaped matrix.
    // Time: O(m * n), Space: O(1) extra space
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (mat.empty() || mat[0].empty()) {
            return mat;
        }

        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c) {
            return mat;
        }

        vector<vector<int>> reshaped(r, vector<int>(c));

        for (int i = 0; i < m * n; i++) {
            reshaped[i / c][i % c] = mat[i / n][i % n];
        }

        return reshaped;
    }
};
