class Solution {
public:
    int jumper(int i, vector<int>& nums, vector<int>& dp) {
        if (i == nums.size() - 1)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int minval = INT_MAX;
        for (int j = i + 1; j <= min(i + nums[i], (int)nums.size() - 1); j++) {
            int jumps = jumper(j, nums, dp);
            if (jumps != INT_MAX)
                minval = min(minval, 1 + jumps);
        }
        return dp[i] = minval;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return jumper(0, nums, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna