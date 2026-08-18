class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq1(26,0);
        for(char i:s){
            freq1[i-'a']++;
        }
        for(char i:t){
            freq1[i-'a']--;
        }
        int total=0;
        for(int i:freq1){
            if(i>0){
                total+=i;
            }
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna