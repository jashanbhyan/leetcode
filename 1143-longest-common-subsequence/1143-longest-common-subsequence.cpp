class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        bool check = false;
        for (int j = 0; j < m; j++) {
            if (text1[0] == text2[j]) {
                check = true;
            }
            if (check) {
                dp[0][j] = 1;
            }
        }
        check = false;
        for (int i = 0; i < n; i++) {
            if (text1[i] == text2[0]) {
                check = true;
            }
            if (check) {
                dp[i][0] = 1;
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {

                if (text1[i] == text2[j]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] = max(
                        dp[i - 1][j],
                        dp[i][j - 1]
                    );
                }
            }
        }
        return dp[n - 1][m - 1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna