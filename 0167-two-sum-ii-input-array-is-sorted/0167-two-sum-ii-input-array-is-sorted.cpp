class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        vector<int> res;
        while(left<right){
            int sum=numbers[left]+numbers[right];
            if(sum==target){
                res.push_back(left+1);
                res.push_back(right+1);
                 break;
            }
            if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna