class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                pq.push({freq[i], 'a' + i});
            }
        }
        string res = "";
        char prev = '#';
        while (!pq.empty()) {
            auto [count, value] = pq.top();
            pq.pop();
            if (value == prev) {
                if (pq.empty()) {
                    return "";
                }
                auto [count2, value2] = pq.top();
                pq.pop();
                res += value2;
                prev = value2;
                count2--;
                if (count2 > 0) {
                    pq.push({count2, value2});
                }
                pq.push({count, value});
            }
            else {
                res += value;
                prev = value;
                count--;
                if (count > 0) {
                    pq.push({count, value});
                }
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna