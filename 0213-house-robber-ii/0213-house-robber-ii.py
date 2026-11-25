class Solution:
    def solve(self, nums):
        dp = [-1] * (len(nums))
        dp[0] = nums[0]
        for index in range(1, len(nums)):
            if index == 0:
                return nums[0] 
            if index < 0:
                return 0
            if dp[index] != -1:
                return dp[index]
            if index > 1:
                pick = nums[index] + dp[index-2]
            else:
                pick = nums[index]
            notpick = dp[index-1] 
            dp[index] = max(pick, notpick)
        return dp[-1]

    def rob(self, nums: list[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]
        ans1 = self.solve(nums[0:n-1])
        ans2 = self.solve(nums[1:])
        return max(ans1, ans2)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna