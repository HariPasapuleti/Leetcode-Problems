class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int temp = 2, res = 0;
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i - 2] + nums[i - 1] == nums[i]) {
                temp++;
            } else {
                res = max(res, temp);
                temp = 2;
            }
        }
        res = max(res, temp);
        return res;
    }
};