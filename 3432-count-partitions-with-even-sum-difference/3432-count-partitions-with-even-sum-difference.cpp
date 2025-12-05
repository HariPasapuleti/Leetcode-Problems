class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int suffix = 0, prefix = 0, res = 0;
        for (int i = 0; i < nums.size(); i++) {
            suffix += nums[i];
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            prefix += nums[i];
            suffix -= nums[i];
            if (abs(prefix - suffix) % 2 == 0)
                res++;
        }
        return res;
    }
};