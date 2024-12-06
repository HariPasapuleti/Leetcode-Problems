class Solution {
public:
    int rob(vector<int>& nums) {

        vector<int> dp(nums.size() + 1, -1);
        return totalHouses(nums.size()-1, nums, dp);
    }

    int totalHouses(int ind, vector<int>& nums, vector<int>& dp) {

        if (ind == 0)
            return nums[ind];

        if (ind < 0)
            return 0;
        if (dp[ind] != -1)
            return dp[ind];

        int pick = nums[ind] + totalHouses(ind - 2, nums, dp);
        int notPick = totalHouses(ind - 1, nums, dp);

        return dp[ind] = max(pick, notPick);
    }
};