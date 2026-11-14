class Solution {
public:
    int dp[15][17000];
    int helper(vector<int> &nums1, vector<int>&nums2, int i, int mask) {
        if(i >= nums1.size()) {
            return 0;
        }
        if(dp[i][mask] != -1) {
            return dp[i][mask];
        }
        int ans = INT_MAX;
        for(int j = 0; j < nums2.size(); j++) {
            if(mask&(1 << j)) {
                continue;
            }
            int val = nums1[i]^nums2[j];
            ans = min(ans, helper(nums1, nums2, i+1, mask|(1 << j)) + val);
        }
        return dp[i][mask] = ans;
    }
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        memset(dp, -1, sizeof(dp));
        return helper(nums1, nums2, 0, 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna