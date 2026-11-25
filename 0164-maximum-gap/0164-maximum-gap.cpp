class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();

        if(n < 2) return 0;

        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());

        if(minVal == maxVal) return 0;

        int bucket_size = max(1, (maxVal - minVal)/(n-1));

        int bucket_count = (maxVal - minVal)/bucket_size + 1;

        vector<int> bucketMin(bucket_count, INT_MAX);
        vector<int> bucketMax(bucket_count, INT_MIN);
        vector<int> bucketUsed(bucket_count, false);
        for(int num : nums) {
            int bucket_index = (num - minVal)/bucket_size;
            bucketMin[bucket_index] = min(bucketMin[bucket_index], num);
            bucketMax[bucket_index] = max(bucketMax[bucket_index], num);
            bucketUsed[bucket_index] = true;
        }
        int maxGap = 0;
        int PrevBucketMax = minVal;
        for(int i = 0; i < bucket_count; i++) {
            if(!bucketUsed[i]) {
                continue;
            }
            maxGap = max(maxGap, bucketMin[i] - PrevBucketMax);
            PrevBucketMax = bucketMax[i];
        }

        return maxGap;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna