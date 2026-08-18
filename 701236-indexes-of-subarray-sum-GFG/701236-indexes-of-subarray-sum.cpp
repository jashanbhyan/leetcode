class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int> res;

        int left = 0;
        int right = 0;
        int sum = 0;

        while (right < arr.size()) {
            sum += arr[right];

            while (sum > target && left <= right) {
                sum -= arr[left];
                left++;
            }

            if (sum == target) {
                res.push_back(left + 1);
                res.push_back(right + 1);
                return res;
            }

            right++;
        }

        res.push_back(-1);
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna