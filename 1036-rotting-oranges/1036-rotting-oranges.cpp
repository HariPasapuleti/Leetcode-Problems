class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int rows = grid.size(), cols = grid[0].size();
        queue<pair<int, int>> q;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 2)
                    q.push({i, j});
            }
        }

        vector<vector<int>> offset{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int minutes = 0;
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for (int j = 0; j < 4; j++) {
                    int row = x + offset[j][0], col = y + offset[j][1];
                    if (row < 0 || col < 0 || row >= rows || col >= cols ||
                        grid[row][col] == 0 || grid[row][col] == 2)
                        continue;
                    if (grid[row][col] == 1) {
                        q.push({row, col});
                        grid[row][col] = 2;
                    }
                }
            }
            minutes++;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1)
                    return -1;
            }
        }
        return max(0, minutes - 1);
    }
};