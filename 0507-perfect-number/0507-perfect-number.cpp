class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=1;
        if(num==1){
            return false;
        }
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                sum+=i;
                sum+=(num/i);
            }
        }
        if(sum==num){
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna