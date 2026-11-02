class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;

        for(char i : s) {
            if(i == '(' || i == '{' || i == '[') {
                st.push(i);
            }
            else {
                if(st.empty()) {
                    return false;
                }

                if((i == ')' && st.top() != '(') ||
                   (i == '}' && st.top() != '{') ||
                   (i == ']' && st.top() != '[')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna