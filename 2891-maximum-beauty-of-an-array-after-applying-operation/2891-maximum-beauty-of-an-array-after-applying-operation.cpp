class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int i = 0, j = 0, res = 0;
        for (int i = 0; i < nums.size(); i++) {
            while (j < nums.size() && nums[j] - nums[i] <= 2 * k)
                j++;
            res = max(res, j - i);
        }
        return res;
    }
};