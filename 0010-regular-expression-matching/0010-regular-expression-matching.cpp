class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.length() + 1, vector<int>(p.length() + 1, -1));
        return dfs(s, p, 0, 0, dp);
    }

    bool dfs(string s, string p, int i, int j, vector<vector<int>>& dp) {

        if (dp[i][j] != -1)
            return dp[i][j];
        if (i >= s.size() && j >= p.size())
            return dp[i][j] = true;
        else if (j >= p.size())
            return dp[i][j] = false;

        bool match = (i < s.size() && (s[i] == p[j] || p[j] == '.'));

        if (j + 1 < p.size() && p[j + 1] == '*') {
            return dp[i][j] = dfs(s, p, i, j + 2, dp) ||
                              (match && dfs(s, p, i + 1, j, dp));
        }

        if (match) {
            return dp[i][j] = dfs(s, p, i + 1, j + 1, dp);
        }

        return dp[i][j] = false;
    }
};
