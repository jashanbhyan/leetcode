class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        // Skip leading whitespaces
        while (i < n && s[i] == ' ')
            i++;

        // Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        long long result = 0;

        // Convert digits
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // Handle overflow
            if (sign * result > INT_MAX)
                return INT_MAX;
            if (sign * result < INT_MIN)
                return INT_MIN;

            i++;
        }

        return sign * result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna