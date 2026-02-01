class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int mini = INT_MAX, sec_mini = INT_MAX;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < mini) {
                sec_mini = mini;
                mini = nums[i];
            } else if (nums[i] < sec_mini) {
                sec_mini = nums[i];
            }
        }
        return nums[0] + mini + sec_mini;
    }
};