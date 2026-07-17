class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int res=0;
        while(right<nums.size()){
            if(nums[right]==0&&k==0){
                if(nums[left]==0){
                    k++;
                }
                left++;
                continue;
            }
            if(nums[right]==0){
                k--;
            }
            res=max(res,right-left+1);
            right++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna