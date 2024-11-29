class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int pre = 1, suff = 1, res = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (pre == 0)
                pre = 1;
            if (suff == 0)
                suff = 1;
            pre *= nums[i];
            suff *= nums[nums.size() - i - 1];
            res = max(res, max(pre, suff));
        }
        return res;
    }
};