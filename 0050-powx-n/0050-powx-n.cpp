class Solution {
public:
    double power(double x, long long n) {
        if (n == 0) {
            return 1;
        }

        double ans = power(x, n / 2);

        if (n % 2 == 1) {
            return ans * ans * x;
        }

        return ans * ans;
    }

    double myPow(double x, int n) {
        long long N = n;

        if (N < 0) {
            return 1.0 / power(x, -N);
        }

        return power(x, N);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna