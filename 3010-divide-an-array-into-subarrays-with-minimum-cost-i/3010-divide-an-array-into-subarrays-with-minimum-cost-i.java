class Solution {
    public int minimumCost(int[] nums) {
        int mini = Integer.MAX_VALUE, sec_mini = Integer.MAX_VALUE;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] < mini) {
                sec_mini = mini;
                mini = nums[i];
            } else if (nums[i] < sec_mini) {
                sec_mini = nums[i];
            }
        }
        return nums[0] + mini + sec_mini;
    }
}