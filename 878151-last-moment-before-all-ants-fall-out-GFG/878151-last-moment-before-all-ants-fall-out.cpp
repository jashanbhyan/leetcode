class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
        int a = 0;
                int b = 0;
                if (!left.empty()) {
                    a = *max_element(left.begin(), left.end());
                }
                if (!right.empty()) {
                    b = n - *min_element(right.begin(), right.end());
                }
                return max(a, b);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna