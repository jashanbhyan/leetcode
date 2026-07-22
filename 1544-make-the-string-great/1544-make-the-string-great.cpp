class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for(char c : s) {
            if(!st.empty() &&
               ((isupper(st.top()) && islower(c)) ||
                (islower(st.top()) && isupper(c))) &&
               tolower(st.top()) == tolower(c))
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        string ans;

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna