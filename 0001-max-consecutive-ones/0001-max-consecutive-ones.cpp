class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int count=0;
        for(int i:nums){
            if(i==1){
                count++;
            }
            if(count>max){
                max=count;
            }
            if(i==0){
                count=0;
                continue;
            }
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna