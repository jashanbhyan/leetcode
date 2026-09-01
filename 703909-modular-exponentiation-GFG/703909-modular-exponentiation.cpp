class Solution {
  public:
    int powMod(int x, int n, int M) {
        // code here
        if(n==0) return 1;
        if(n==1) return x;
        long long ans=powMod(x,n/2,M)%M;
        if(n%2==1) return ((ans*ans)%M*x)%M;
        return (ans*ans)%M;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna