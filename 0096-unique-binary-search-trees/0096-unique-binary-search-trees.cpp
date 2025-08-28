class Solution {
public:
    int numTrees(int n) {

        vector<int> dp(n + 1, -1);
        return catalan_number(n, dp);
    }

    int catalan_number(int n, vector<int>& dp) {
        if (n <= 1)
            return 1;
        if (dp[n] != -1)
            return dp[n];

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += catalan_number(i - 1, dp) * catalan_number(n - i, dp);
        }
        return dp[n] = ans;
    }
};