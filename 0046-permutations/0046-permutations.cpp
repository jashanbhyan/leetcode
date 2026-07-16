class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void solve(vector<int>& nums,vector<bool>& used){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            used[i]=true;
            temp.push_back(nums[i]);
            solve(nums,used);
            used[i]=false;
            temp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        solve(nums,used);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna