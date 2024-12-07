class Solution {
public:
    int uniquePaths(int m, int n) {

        vector<vector<int>> dp(m, vector<int>(n, -1));
        return count_path(m - 1, n - 1, dp);
    }

    int count_path(int i, int j, vector<vector<int>>& dp) {
        if (i == 0 && j == 0)
            return 1;
        if (i < 0 || j < 0)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int up = count_path(i - 1, j, dp);
        int left = count_path(i, j - 1, dp);

        return dp[i][j] = (up + left);
    }
};