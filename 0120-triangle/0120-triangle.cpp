class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        for (int i = 0; i < n; i++) {
            dp[n - 1][i] = triangle[n - 1][i];
        }

        for (int i = n - 2; i >= 0; i--) {
            for (int j = i; j >= 0; j--) {
                int down = triangle[i][j] + dp[i + 1][j];
                int diagonal = triangle[i][j] + dp[i + 1][j + 1];

                dp[i][j] = min(down, diagonal);
            }
        }
        return dp[0][0];

        // return min_path(0, 0, n, triangle, dp);
    }

    int min_path(int curr_row, int next_row, int n,
                 vector<vector<int>> triangle, vector<vector<int>>& dp) {
        if (curr_row == n - 1)
            return triangle[curr_row][next_row];

        if (dp[curr_row][next_row] != -1)
            return dp[curr_row][next_row];

        int down = triangle[curr_row][next_row] +
                   min_path(curr_row + 1, next_row, n, triangle, dp);
        int diagonal = triangle[curr_row][next_row] +
                       min_path(curr_row + 1, next_row + 1, n, triangle, dp);

        return dp[curr_row][next_row] = min(down, diagonal);
    }
};