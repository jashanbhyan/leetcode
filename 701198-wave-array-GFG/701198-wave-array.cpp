class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int left=0;
        int right=1;
        while(left<arr.size()&&right<arr.size()){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            right+=2;
            left+=2;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna