class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int res = 0, n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(1024, -1));
        return helper_dp(0, nums, dp, res);
    }

    int helper_dp(int ind, vector<int> nums, vector<vector<int>>& dp, int res) {
        if (ind == nums.size())
            return res;
        if (dp[ind][res] != -1)
            return dp[ind][res];

        int take = helper_dp(ind + 1, nums, dp, res ^ nums[ind]);
        int notTake = helper_dp(ind + 1, nums, dp, res);
        return dp[ind][res] = take + notTake;
    }
};