class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        for(int x : nums)
            mp[x]++;

        vector<int> ans;

        for(int i = 0; i < k; i++) {

            int maxi = 0;
            int num = 0;

            for(auto x : mp) {
                if(x.second > maxi) {
                    maxi = x.second;
                    num = x.first;
                }
            }

            ans.push_back(num);
            mp.erase(num);   // remove it
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna