class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        for(int i=1;i<arr.size();i++){
            arr[i]=arr[i-1]+arr[i];
        }
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna