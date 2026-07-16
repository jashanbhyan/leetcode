class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void solve(int n,int k,int index){
        if(temp.size()==k){
            ans.push_back(temp);
        }
        for(int i=index;i<n;i++){
            temp.push_back(i+1);
            solve(n,k,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        solve(n,k,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna