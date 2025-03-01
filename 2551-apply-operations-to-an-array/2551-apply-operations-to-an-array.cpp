class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int k = 0, n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != 0) {
                if (nums[i] == nums[i + 1]) {
                    nums[i] *= 2;
                    nums[i + 1] = 0;
                    res[k++] = nums[i];
                    i++;
                } else
                    res[k++] = nums[i];
            }
        }
        if (nums[n - 1] != 0)
            res[k] = nums[n - 1];
        return res;
    }
};