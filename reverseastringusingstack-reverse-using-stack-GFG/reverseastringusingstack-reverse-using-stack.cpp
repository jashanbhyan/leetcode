class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char> st;
        for(char i:S){
            st.push(i);
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna