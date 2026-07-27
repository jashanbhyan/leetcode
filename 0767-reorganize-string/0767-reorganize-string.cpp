class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(char i:s){
            mp[i]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string res="";
        while(pq.size()>=2){
            auto [freq1,char1]=pq.top();
            pq.pop();
            auto [freq2,char2]=pq.top();
            pq.pop();
            res+=char1;
            res+=char2;

            if(--freq1>0){
                pq.push({freq1,char1});
            }
            if(--freq2>0){
                pq.push({freq2,char2});
            }
        }
        while(!pq.empty()){
            auto [freq,char1]=pq.top();
            if(freq>1){
                return "";
            }
            res+=char1;
            pq.pop();
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna