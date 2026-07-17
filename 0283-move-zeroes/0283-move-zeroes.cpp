class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int left = 0;

        for(int right = 0; right < nums.size(); right++) {

            if(nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna