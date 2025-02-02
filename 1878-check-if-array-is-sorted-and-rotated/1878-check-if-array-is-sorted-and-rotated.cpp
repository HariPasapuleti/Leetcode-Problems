class Solution {
public:
    bool check(vector<int>& nums) {
        int checkPoints = 0, n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1])
                checkPoints++;
        }
        if (nums[n - 1] > nums[0])
            checkPoints++;
        return checkPoints <= 1;
    }
};