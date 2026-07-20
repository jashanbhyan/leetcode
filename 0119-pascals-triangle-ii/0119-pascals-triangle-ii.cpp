class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i=0;i<=rowIndex;i++){
            ans.push_back(vector<int>());
            for(int j=0;j<i+1;j++){
                if(j==0||j==i){
                    ans[i].push_back(1);
                    continue;
                }
                ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
        }
        return ans[rowIndex];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna