#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n + 1);
        for (const auto& edge : times) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v, w});
        }
        vector<int> shortestTime(n + 1, INT_MAX);
        shortestTime[k] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});
        while (!pq.empty()) {
            auto [currentTime, u] = pq.top();
            pq.pop();
            if (currentTime > shortestTime[u]) {
                continue;
            }
            for (const auto& neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (currentTime + weight < shortestTime[v]) {
                    shortestTime[v] = currentTime + weight;
                    pq.push({shortestTime[v], v});
                }
            }
        }
        int maxDelay = 0;
        for (int i = 1; i <= n; ++i) {
            if (shortestTime[i] == INT_MAX) {
                return -1;
            }
            maxDelay = max(maxDelay, shortestTime[i]);
        }
        return maxDelay;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna