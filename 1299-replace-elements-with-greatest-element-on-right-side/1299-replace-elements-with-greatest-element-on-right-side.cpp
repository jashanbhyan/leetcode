class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int right=arr.size()-1;
        int left=0;
        int max=-1;
        while(left<=right){
            int temp=arr[right];
            arr[right]=max;
            if(max<temp){
                max=temp;
            }
            right--;
        }
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna