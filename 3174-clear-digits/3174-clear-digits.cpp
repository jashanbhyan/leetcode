class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(char i:s){
            if(isdigit(i)){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna