class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int mis=-1;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==2){
                res.push_back(i);
            }
            if(mp[i]==0){
                mis=i;
            }
        }
        res.push_back(mis);
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna