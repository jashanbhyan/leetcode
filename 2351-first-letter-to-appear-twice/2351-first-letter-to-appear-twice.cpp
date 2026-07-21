class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp;
        for(char i: s){
            mp[i]++;
            if(mp[i]==2){
                return i;
            }
        }
        return s[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna