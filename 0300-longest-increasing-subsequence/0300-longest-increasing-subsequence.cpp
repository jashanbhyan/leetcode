class Solution {
public:
    int lengthOfLISUtil(vector<int>& nums, vector<vector<int>>& dp, int curr, int prev)
    {
        if(curr >= nums.size())
            return 0;

        if(dp[curr][prev + 1] != -1)
            return dp[curr][prev + 1];

        int skip = lengthOfLISUtil(nums, dp, curr + 1, prev);
        int take = 0;

        if(prev == -1 || nums[curr] > nums[prev])
            take = 1 + lengthOfLISUtil(nums, dp, curr + 1, curr);

        return dp[curr][prev + 1] = max(take, skip);
    }

    int lengthOfLIS(vector<int>& nums)
    {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        return lengthOfLISUtil(nums, dp, 0, -1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna