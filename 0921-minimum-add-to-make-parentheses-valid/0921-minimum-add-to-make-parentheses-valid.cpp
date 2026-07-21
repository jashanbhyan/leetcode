class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> res;
        for(char i:s){
            if(i=='('){
                res.push(i);
            }
            else{
                if(!res.empty()&&res.top()=='('){
                    res.pop();
                }
                else{
                    res.push(i);
                }
            }
        }
        return res.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna