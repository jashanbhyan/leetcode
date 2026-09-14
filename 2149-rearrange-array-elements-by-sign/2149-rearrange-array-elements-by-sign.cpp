class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int left=0;
        int right=1;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[left]=nums[i];
                left+=2;
            }
            else{
                ans[right]=nums[i];
                right+=2;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna