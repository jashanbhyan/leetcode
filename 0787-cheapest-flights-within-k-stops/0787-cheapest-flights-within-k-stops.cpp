class Solution {
public:
    using pii = pair<int, pair<int,int>>;
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        int INF = 1e9 + 7;
        for (auto& v : flights)
            adj[v[0]].emplace_back(v[2], v[1]);
        vector<vector<int>> dp(n, vector<int>(k+2, INF));
        priority_queue<pii, vector<pii>, greater<pii>> q;
        dp[src][0] = 0;
        q.push({0, {src, 0}});
        while (!q.empty()) {
            auto [d, pi] = q.top(); q.pop();
            auto [u, ki] = pi;
            if (ki > k || d > dp[u][ki])
                continue;
            for (auto [c, v] : adj[u]) {
                int nd = d + c;
                if (nd < dp[v][ki+1]) {
                    dp[v][ki+1] = nd;
                    q.push({nd, {v, ki+1}});
                }
            }
        }
        int ans = INF;
        for (int i = 0; i <= k + 1; i++) {
            ans = min(ans, dp[dst][i]);
        }
        return ans == INF ? -1 : ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna