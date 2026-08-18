class Solution {
  public:
    bool isPrime(int n) {
        // code here
        // Current Time Complexity: O(n) - Linear
        // Current Space Complexity: O(1) - Constant
        // Optimal Time Complexity: O(sqrt(n))
        
        bool res=true;
        if(n==1){
            return false;
        }
        // HINT: You are checking up to n/2. While correct, you can optimize this significantly.
        // Think about the properties of divisors: if n = a * b, one of them must be <= sqrt(n).
        // Try changing the loop condition to i * i <= n to achieve O(sqrt(n)) complexity.
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna