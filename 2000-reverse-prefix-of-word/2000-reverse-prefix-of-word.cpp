class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        string ans="";
        for(char i:word){
            if(ans.empty()){
                st.push(i);
                if(st.top()==ch){
                    while(!st.empty()){
                        ans+=st.top();
                        st.pop();
                    }
                }
                continue;
            }
            ans+=i;
        }
        if(ans.empty()){
            return word;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna