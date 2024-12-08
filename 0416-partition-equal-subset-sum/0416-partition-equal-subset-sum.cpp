class Solution {
public:
    bool canPartition(vector<int>& nums) {

        int sum = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum % 2 != 0)
            return false;

        int target = sum / 2;
        vector<vector<bool>> dp(n, vector<bool>(sum + 1, 0));

        for (int i = 0; i < n; i++)
            dp[i][0] = true;
        dp[0][nums[0]] = true;
        // return is_possible(n - 1, nums, sum / 2, dp);

        for (int ind = 1; ind < n; ind++) {
            for (int k = 1; k <= target; k++) {
                bool notTake = dp[ind - 1][k];
                bool take = false;
                if (nums[ind] <= k)
                    take = dp[ind - 1][k - nums[ind]];

                dp[ind][k] = take | notTake;
            }
        }

        return dp[n - 1][target];
    }

    int is_possible(int ind, vector<int> nums, int target,
                    vector<vector<int>>& dp) {
        if (target == 0)
            return true;
        if (ind == 0)
            return nums[0] == target;

        if (dp[ind][target] != -1)
            return dp[ind][target];

        bool notTake = is_possible(ind - 1, nums, target, dp);
        bool take = false;
        if (nums[ind] <= target)
            take = is_possible(ind - 1, nums, target - nums[ind], dp);

        return dp[ind][target] = take || notTake;
    }
};