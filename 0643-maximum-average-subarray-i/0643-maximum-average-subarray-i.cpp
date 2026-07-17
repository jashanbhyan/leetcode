class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res=0.0;
        double sum=0.0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        res=sum/k;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            if(sum/k>res){
                res=sum/k;
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna