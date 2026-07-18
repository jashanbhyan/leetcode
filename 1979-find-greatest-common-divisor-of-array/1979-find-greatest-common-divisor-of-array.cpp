class Solution {
public:
    int findGCD(vector<int>& nums) {
        int b=*max_element(nums.begin(),nums.end());
        int a=*min_element(nums.begin(),nums.end());
        int ans=1;
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0){
                ans=i;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna