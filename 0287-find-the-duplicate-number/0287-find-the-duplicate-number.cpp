class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left=0;
        int right=1;
        sort(nums.begin(),nums.end());
        while(right<nums.size()){
            if(nums[left]==nums[right]){
                return nums[left];
            }
            left++;
            right++;
        }
        return nums[left];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna