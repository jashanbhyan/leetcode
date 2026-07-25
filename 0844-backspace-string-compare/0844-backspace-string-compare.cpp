class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(char i:s){
            if(!st1.empty()&&i=='#'){
                st1.pop();
            }
            else if(i=='#'){
                continue;
            }
            else{
                st1.push(i);
            }
        }
        for(char i:t){
            if(!st2.empty()&&i=='#'){
                st2.pop();
            }
            else if(i=='#'){
                continue;
            }
            else{
                st2.push(i);
            }
        }
        if(st1==st2){
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna