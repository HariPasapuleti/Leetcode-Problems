class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int close_sum = INT_MAX, res_sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                if (close_sum > abs(current_sum - target)) {
                    close_sum = abs(current_sum - target);
                    res_sum = current_sum;
                }
                if (current_sum > target) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return res_sum;
    }
};