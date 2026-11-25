class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        vector<int> dr = {0, 0, 1, -1};
        vector<int> dc = {1, -1, 0, 0};
        priority_queue<array<int, 3>,
        vector<array<int, 3>>,
        greater<array<int, 3>>> pq;
        dist[0][0] = 0;
        pq.push({0, 0, 0});
        while (!pq.empty()) {
            auto [effort, row, col] = pq.top();
            pq.pop();
            if (effort > dist[row][col]) continue;
            if (row == m - 1 && col == n - 1)
                return effort;
            for (int i = 0; i < 4; i++) {
                int nr = row + dr[i];
                int nc = col + dc[i];
                if (nr < 0 || nr >= m || nc < 0 || nc >= n)
                    continue;
                int diff = abs(heights[row][col] - heights[nr][nc]);
                int newEffort = max(effort, diff);
                if (newEffort < dist[nr][nc]) {
                    dist[nr][nc] = newEffort;
                    pq.push({newEffort, nr, nc});
                }
            }
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna