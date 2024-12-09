class Solution {
public:
    int change(int amount, vector<int>& coins) {

        int n = coins.size();
        vector<vector<unsigned long long int>> dp(
            n, vector<unsigned long long int>(amount + 1, 0));

        for (int i = 0; i <= amount; i++) {
            if (i % coins[0] == 0)
                dp[0][i] = 1;
        }
        for (int i = 1; i < n; i++) {
            for (int t = 0; t <= amount; t++) {
                unsigned long long int pick = 0;
                if (coins[i] <= t)
                    pick = dp[i][t - coins[i]];
                unsigned long long int notPick = dp[i - 1][t];

                dp[i][t] = (pick + notPick);
            }
        }

        return dp[n - 1][amount];
        // return possibility(n - 1, coins, amount, dp);
    }

    int possibility(int ind, vector<int> coins, int amount,
                    vector<vector<int>>& dp) {
        if (ind == 0) {
            if (amount % coins[ind] == 0)
                return 1;
            return 0;
        }

        if (dp[ind][amount] != -1)
            return dp[ind][amount];
        int pick = 0;
        if (amount >= coins[ind])
            pick = possibility(ind, coins, amount - coins[ind], dp);
        int notPick = possibility(ind - 1, coins, amount, dp);

        return dp[ind][amount] = pick + notPick;
    }
};