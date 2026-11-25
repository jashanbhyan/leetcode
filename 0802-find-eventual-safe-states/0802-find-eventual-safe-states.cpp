class Solution {
public:
    bool dfs(int node, vector<int>& vis, vector<int>& visPath,
             vector<vector<int>>& graph, vector<int>& check) {
        vis[node] = 1;
        visPath[node] = 1;
        for(auto adjNode : graph[node]) {
            if(!vis[adjNode]) {
                if(dfs(adjNode, vis, visPath, graph, check) == true) {
                    return true;
                }
            }
            else if(visPath[adjNode]) {
                return true;
            }
        }
        check[node] = 1;
        visPath[node] = 0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, 0);
        vector<int> visPath(n, 0);
        vector<int> check(n, 0);
        vector<int> safeNodes;
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, vis, visPath, graph, check);
            }
        }
        for(int i = 0; i < n; i++) {
            if(check[i] == 1) {
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna