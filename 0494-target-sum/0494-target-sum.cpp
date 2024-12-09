class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        if (target < -sum || target > sum)
            return 0;
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(2 * sum + 1, -1));
        return can_possible(n - 1, nums, target, sum, dp);
    }

    int can_possible(int ind, vector<int> nums, int target, int sum,
                     vector<vector<int>>& dp) {
        if (ind == 0) {
            if (target == 0 && nums[0] == 0)
                return 2;
            if (target == nums[0] || target == -nums[0])
                return 1;
            return 0;
        }

        if (target < -sum || target > sum) {
            return 0;
        }
        if (dp[ind][sum + target] != -1)
            return dp[ind][sum + target];

        int plus = can_possible(ind - 1, nums, target - nums[ind], sum, dp);
        int minus = can_possible(ind - 1, nums, target + nums[ind], sum, dp);

        return dp[ind][sum + target] = plus + minus;
    }
};