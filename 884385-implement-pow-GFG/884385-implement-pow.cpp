class Solution {
  public:
    double pow(double b,long long e){
        if(e==0) return 1;
        if(e==1) return b;
        double ans=pow(b,e/2);
        if(e%2==1){
            return ans*ans*b;
        }
        return ans*ans;
    }
    double power(double b, int e) {
        // code here
        long long n=e;
        if(e<0){
            return 1.0/pow(b,-n);
        }
        return pow(b,n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna