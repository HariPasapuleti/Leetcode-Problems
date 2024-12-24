class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size(), res = 0;
        vector<bool> isVisited(n, 0);
        for (int i = 0; i < n; i++) {
            if (!isVisited[i]) {
                res++;
                bfs(i, isConnected, isVisited);
            }
        }
        return res;
    }

    void bfs(int node, vector<vector<int>> g, vector<bool>& v) {
        queue<int> q;
        q.push(node);
        v[node] = true;
        while (!q.empty()) {
            node = q.front();
            q.pop();
            for (int i = 0; i < g[node].size(); i++) {
                if (g[node][i] && !v[i]) {
                    v[node] = true;
                    q.push(i);
                }
            }
        }
    }

    void dfs(int node, vector<vector<int>> g, vector<bool>& v) {
        v[node] = true;
        for (int i = 0; i < g[node].size(); i++) {
            if (g[node][i] && !v[i]) {
                dfs(i, g, v);
            }
        }
    }
};