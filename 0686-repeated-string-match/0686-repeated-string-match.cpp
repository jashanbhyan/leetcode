class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeat = a;
        int count = 1;

        while(repeat.size() < b.size()){
            repeat += a;
            count ++;
        }

        if(repeat.find(b) != -1){
            return count;
        }

        repeat += a;
        count++;

        if(repeat.find(b) != -1){
            return count;
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna