class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<long long> freq(mx + 1, 0);

        for (int x : nums)
            freq[x]++;

        // divCnt[i] = numbers divisible by i
        vector<long long> divCnt(mx + 1, 0);

        for (int i = 1; i <= mx; i++) {
            for (int j = i; j <= mx; j += i)
                divCnt[i] += freq[j];
        }

        // exact[i] = pairs having gcd exactly i
        vector<long long> exact(mx + 1, 0);

        for (int i = mx; i >= 1; i--) {
            exact[i] = divCnt[i] * (divCnt[i] - 1) / 2;

            for (int j = i + i; j <= mx; j += i)
                exact[i] -= exact[j];
        }

        // prefix counts
        vector<long long> prefix(mx + 1, 0);

        for (int i = 1; i <= mx; i++)
            prefix[i] = prefix[i - 1] + exact[i];

        vector<int> ans;

        for (long long q : queries) {
            int g = lower_bound(prefix.begin() + 1, prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna