class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char i:s){
            mp[i]++;
        }
        priority_queue<pair<int,char>> pq;
        string res="";
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while (!pq.empty()) {
            int freq = pq.top().first;
            char ch = pq.top().second;
            pq.pop();
            while (freq--) {
                res += ch;
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna