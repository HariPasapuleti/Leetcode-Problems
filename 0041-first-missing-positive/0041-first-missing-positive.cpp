class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool contain = false;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                contain = true;
            if (nums[i] <= 0 || nums[i] > n)
                nums[i] = 1;
        }
        if (!contain)
            return 1;

        for (int i = 0; i < n; i++) {
            int value = abs(nums[i]);
            if (value == n)
                nums[0] = -abs(nums[0]);
            else
                nums[value] = -abs(nums[value]);
        }
        for (int i = 1; i < n; i++) {
            if (nums[i] > 0)
                return i;
        }
        if (nums[0] > 0)
            return n;
        return n + 1;
    }
};