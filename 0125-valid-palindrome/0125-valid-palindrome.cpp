class Solution {
public:
    bool isPalindrome(string s) {

        string temp;

        for(char c : s){

            if(isalnum(c)){
                temp += tolower(c);
            }
        }

        string rev = temp;
        reverse(rev.begin(), rev.end());

        return temp == rev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna