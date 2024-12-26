class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<long>> dp(n + 1, vector<long>(2, 0));
        // return func(0, prices, 1, fee, dp);
        for (int i = n - 1; i >= 0; i--) {
            for (int buy = 0; buy <= 1; buy++) {
                long profit = 0;
                if (buy) {
                    profit = max(-prices[i] + dp[i + 1][0], dp[i + 1][1]);
                } else {
                    profit = max(prices[i] + dp[i + 1][1] - fee, dp[i + 1][0]);
                }
                dp[i][buy] = profit;
            }
        }
        return dp[0][1];
    }

    int func(int ind, vector<int> p, int buy, int fee,
             vector<vector<int>>& dp) {
        if (ind == p.size()) {
            return 0;
        }
        if (dp[ind][buy] != -1)
            return dp[ind][buy];
        long profit = 0;
        if (buy) {
            profit = max(-p[ind] + func(ind + 1, p, 0, fee, dp),
                         func(ind + 1, p, 1, fee, dp));
        } else {
            profit = max(p[ind] + func(ind + 1, p, 1, fee, dp) - fee,
                         func(ind + 1, p, 0, fee, dp));
        }
        return dp[ind][buy] = profit;
    }
};