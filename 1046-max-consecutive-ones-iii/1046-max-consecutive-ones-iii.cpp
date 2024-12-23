class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0, zeroes = 0;
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zeroes++;
            if (zeroes > k) {
                while (j <= i && zeroes > k) {
                    if (nums[j] == 0)
                        zeroes--;
                    j++;
                }
            }
            res = max(res, i - j + 1);
        }
        return res;
    }
};