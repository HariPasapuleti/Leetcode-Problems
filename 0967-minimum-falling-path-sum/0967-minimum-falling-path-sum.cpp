class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {

        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        for (int i = 0; i < n; i++) {
            dp[0][i] = matrix[0][i];
        }

        for (int i = 1; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int up = (i > 0) ? matrix[i][j] + dp[i - 1][j] : 1e9;
                int ld = (j > 0) ? matrix[i][j] + dp[i - 1][j - 1] : 1e9;
                int rd = (j < n - 1) ? matrix[i][j] + dp[i - 1][j + 1] : 1e9;

                dp[i][j] = min(up, min(ld, rd));
            }
        }

        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            mini = min(mini, dp[n - 1][i]);
        }

        return mini;

        // for (int k = 0; k < n; k++) {
        //     mini = min(mini, min_path(m - 1, k, matrix, dp));
        // }
        // return mini;
    }

    // int min_path(int i, int j, vector<vector<int>> matrix,
    //              vector<vector<int>> dp) { // Memoization - TLE
    //     if (j >= matrix[0].size() || j < 0)
    //         return 1e9;
    //     if (i == 0)
    //         return matrix[i][j];
    //     if (dp[i][j] != -1)
    //         return dp[i][j];

    //     int up = matrix[i][j] + min_path(i - 1, j, matrix, dp);
    //     int ld = matrix[i][j] + min_path(i - 1, j - 1, matrix, dp);
    //     int rd = matrix[i][j] + min_path(i - 1, j + 1, matrix, dp);

    //     return dp[i][j] = min(up, min(ld, rd));
    // }
};