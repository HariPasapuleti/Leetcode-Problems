class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), res = 0;
        long long total = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
        }
        for (int i = 0; i < n - 1; i++) {
            total -= nums[i];
            sum += nums[i];
            if (sum >= total)
                res++;
        }
        return res;
    }
};