static const int _ = [](){ios_base::sync_with_stdio(false);cin.tie(NULL);return 0;}();
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if ((sum + target) % 2 || abs(target) > sum) return 0;
        int t = (sum + target) / 2;
        vector<int> dp(t + 1, 0);
        dp[0] = 1;
        for (int n : nums)
            for (int j = t; j >= n; j--)
                dp[j] += dp[j - n];
        return dp[t];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna