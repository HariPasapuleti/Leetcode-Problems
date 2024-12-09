class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, 0));

        for (int i = 0; i <= amount; i++) {
            if (i % coins[0] == 0)
                dp[0][i] = i / coins[0];
            else
                dp[0][i] = 1e9;
        }

        for (int i = 1; i < coins.size(); i++) {
            for (int j = 1; j <= amount; j++) {
                int pick = 1e9;
                if (coins[i] <= j)
                    pick = 1 + dp[i][j - coins[i]];
                int notPick = dp[i - 1][j];
                dp[i][j] = min(pick, notPick);
            }
        }

        return dp[n - 1][amount] != 1e9 ? dp[n - 1][amount] : -1;

        // if(can_possible(n-1, coins, amount, dp)==1e9) return -1;
        // return can_possible(n-1, coins, amount, dp);
    }

    // int can_possible(int ind, vector<int> coins, int amount,
    // vector<vector<int>>& dp) {
    //     // cout << count << " ";
    //     if(ind==0) {
    //         if(amount%coins[0] ==0) return amount/coins[0];
    //         return 1e9;
    //     }

    //     if(dp[ind][amount]!=-1) return dp[ind][amount];

    //     int pick=1e9;
    //     if(coins[ind]<=amount) pick=1+can_possible(ind, coins,
    //     amount-coins[ind], dp); int notPick=can_possible(ind-1, coins,
    //     amount, dp);

    //     // cout << min(pick, notPick) << " ";
    //     return dp[ind][amount]=min(pick,notPick);
    // }
};