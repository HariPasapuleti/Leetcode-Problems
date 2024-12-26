class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size(), res = INT_MAX, temp = 0;
        vector<int> dp(n + 1, -1);
        return min(func(n - 1, cost, dp), func(n - 2, cost, dp));
    }
    int func(int ind, vector<int> cost, vector<int>& dp) {
        if (ind < 0) {
            return 0;
        }
        if (ind == 0 || ind == 1)
            return cost[ind];
        if (dp[ind] != -1)
            return dp[ind];
        int oneStep = func(ind - 1, cost, dp);
        int twoStep = func(ind - 2, cost, dp);
        return dp[ind] = cost[ind] + min(oneStep, twoStep);
    }
};