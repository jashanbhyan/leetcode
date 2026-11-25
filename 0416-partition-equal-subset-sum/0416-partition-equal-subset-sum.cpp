class Solution {
public:
    bool solve(vector<int>& nums, int idx, int& sum, int half,
               vector<vector<int>>& dp) {
        if(idx == nums.size()) {
            return half == sum / 2;
        }
        if(dp[idx][half] != -1) return dp[idx][half];
        bool inc = solve(nums, idx + 1, sum, half + nums[idx], dp);
        bool exc = solve(nums, idx + 1, sum, half, dp);
        return dp[idx][half] = inc || exc;
    }

    bool canPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int x : nums) sum += x;
        if(sum % 2 != 0) return false;
        vector<vector<int>> dp(nums.size() + 1,
        vector<int>(sum, -1));
        return solve(nums, 0, sum, 0, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna