class Solution {
public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int left = 0;
        int right = k - 1;
        int sum = 0;

        for(int i = left; i <= right; i++) {
            sum += arr[i];
        }

        int maxSum = sum;

        while(right + 1 < arr.size()) {
            sum -= arr[left];
            right++;
            sum += arr[right];

            maxSum = max(maxSum, sum);

            left++;
        }

        return maxSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna