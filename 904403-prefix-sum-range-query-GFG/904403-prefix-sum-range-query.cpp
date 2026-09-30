class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        for(int i=1;i<arr.size();i++){
            arr[i]=arr[i-1]+arr[i];
        }
        vector<int> res;
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]>0){
                res.push_back(arr[queries[i][1]]-arr[queries[i][0]-1]);
            }
            else{
                res.push_back(arr[queries[i][1]]);
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna