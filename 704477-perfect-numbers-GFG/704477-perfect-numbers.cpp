class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        if(n==1){
            return false;
        }
        int sum=1;
        for(int i=2;i<sqrt(n);i++){
            if(n%i==0){
                sum+=i;
                sum+=(n/i);
            }
        }
        if(sum==n){
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna