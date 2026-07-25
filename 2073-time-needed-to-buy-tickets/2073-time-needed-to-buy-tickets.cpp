class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        for(int i=0;i<tickets.size();i++){
            q.push({tickets[i],i});
        }
        int time=0;
        while(!q.empty()) {
            auto cur = q.front();
            q.pop();
            cur.first--;
            time++;
            if(cur.first == 0) {
                if(cur.second == k)
                    return time;
            } else {
                q.push(cur);
            }
        }
        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna