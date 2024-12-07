class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0)
                    dp[i][j] = grid[i][j];
                else {
                    int up = (i > 0) ? grid[i][j] + dp[i - 1][j] : 1e9;
                    int left = (j > 0) ? grid[i][j] + dp[i][j - 1] : 1e9;
                    dp[i][j] = min(up, left);
                }
            }
        }
        return dp[m - 1][n - 1];

        // return min_path_sum(m - 1, n - 1, grid, dp);
    }

    // int min_path_sum(int i, int j, vector<vector<int>> grid,
    //                  vector<vector<int>>& dp) { // Memoization - TLE
    //     if (i == 0 && j == 0)
    //         dp[i][j] = grid[i][j];
    //     if (i < 0 || j < 0)
    //         return 1e9;

    //     if (dp[i][j] != -1)
    //         return dp[i][j];

    //     int up = grid[i][j] + min_path_sum(i - 1, j, grid, dp);
    //     int left = grid[i][j] + min_path_sum(i, j - 1, grid, dp);

    //     return dp[i][j] = min(up, left);
    // }
};