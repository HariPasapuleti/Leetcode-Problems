class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int res = 1, prev = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] - prev > k) {
                res++;
                prev = nums[i];
            }
        }
        return res;
    }
};