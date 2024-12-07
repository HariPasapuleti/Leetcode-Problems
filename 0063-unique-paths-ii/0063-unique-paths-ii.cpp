class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return count_path(m - 1, n - 1, obstacleGrid, dp);

        // Tabulation method
    //     for (int i = 0; i < m; i++) {
    //         for (int j = 0; j < n; j++) {
    //             if (obstacleGrid[i][j] == 1)
    //                 dp[i][j] = 0;
    //             else if (i == 0 && j == 0)
    //                 dp[i][j] = 1;
    //             else {
    //                 int up = 0, left = 0;
    //                 if (i > 0)
    //                     up = dp[i - 1][j];
    //                 if (j > 0)
    //                     left = dp[i][j - 1];
    //                 dp[i][j] = up + left;
    //             }
    //         }
    //     }
    //     return dp[m - 1][n - 1];
    }

    int count_path(int i, int j, vector<vector<int>> og,
                   vector<vector<int>>& dp) { // Memoization method

        if (i < 0 || j < 0 || og[i][j] == 1)
            return 0;
        if (i == 0 && j == 0)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];

        int up = count_path(i - 1, j, og, dp);
        int left = count_path(i, j - 1, og, dp);

        return dp[i][j] = (up + left);
    }
};