class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        if(prefix[nums.size()-1]-prefix[0]==0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            if(prefix[i-1]==prefix[nums.size()-1]-prefix[i]){
                return i;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna