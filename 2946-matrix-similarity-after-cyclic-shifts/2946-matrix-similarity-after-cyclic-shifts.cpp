class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();
        k %= cols;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int newIndex;
                if (i % 2 == 0) {
                    newIndex = (j + k) % cols;
                }
                else {
                    newIndex = (j - k + cols) % cols;
                }
                if (mat[i][j] != mat[i][newIndex]) {
                    return false;
                }
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna