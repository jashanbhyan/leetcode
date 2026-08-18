/**
 * @param {string} s1
 * @param {string} s2
 * @return {number}
 */
class Solution {
  public:
    int makeAnagram(string &s1, string &s2) {
        // code here
        vector<int> freq(26,0);
        for(char i:s1){
            freq[i-'a']++;
        }
        for(char i:s2){
            freq[i-'a']--;
        }
        int total=0;
        for(int i:freq){
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