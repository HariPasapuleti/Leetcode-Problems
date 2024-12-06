class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        if (n == 1)
            return nums[0];

        int res1 = possibility(0, n - 1, nums);
        int res2 = possibility(1, n, nums);

        return max(res1, res2);
    }

    int possibility(int start, int end, vector<int> nums) {

        int prev = 0, prev2 = 0;
        for (int i = start; i < end; i++) {
            int curr = max(nums[i] + prev2, prev);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};