class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> a;
        unordered_map<char, char> b;

        for (int i = 0; i < s.size(); i++) {

            if (a.count(s[i]) && a[s[i]] != t[i]) {
                return false;
            }

            if (b.count(t[i]) && b[t[i]] != s[i]) {
                return false;
            }

            a[s[i]] = t[i];
            b[t[i]] = s[i];
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna