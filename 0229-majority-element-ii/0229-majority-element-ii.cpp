class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        vector<int> res;
        for(auto i: mp){
            if(i.second>nums.size()/3){
                res.push_back(i.first);
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna