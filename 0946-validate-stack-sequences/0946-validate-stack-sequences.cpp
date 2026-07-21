class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> res;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            res.push(pushed[i]);
            while(j<popped.size()&&!res.empty()&&res.top()==popped[j]){
                res.pop();
                j++;
            }
        }
        if(res.empty()){
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna