class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {

        int n = values.size();
        vector<int> dp(n);
        int res = 0;
        dp[0] = values[0];
        for (int i = 1; i < n; i++) {
            int right = values[i] - i;
            res = max(res, dp[i - 1] + right);
            int left = values[i] + i;
            dp[i] = max(dp[i - 1], left);
        }
        return res;
    }
};