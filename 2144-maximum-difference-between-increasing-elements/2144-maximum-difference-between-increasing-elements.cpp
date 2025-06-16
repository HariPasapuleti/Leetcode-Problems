class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int prefix_mini = INT_MAX, max_diff = -1;
        for (int i = 0; i < nums.size(); i++) {
            prefix_mini = min(prefix_mini, nums[i]);
            if (nums[i] != prefix_mini)
                max_diff = max(max_diff, nums[i] - prefix_mini);
        }
        return max_diff;
    }
};