class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int begin = 0, res = 0;
        for (int i = 1; i < nums.size(); i++) {
            while (nums[i] - nums[begin] > 1)
                begin++;
            if (nums[i] - nums[begin] == 1) {
                res = max(res, i - begin + 1);
            }
        }
        return res;
    }
};