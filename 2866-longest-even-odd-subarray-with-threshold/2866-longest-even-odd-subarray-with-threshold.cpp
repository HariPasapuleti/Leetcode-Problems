class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {

        int count = 0, flag = 0, max_count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= threshold) {
                if (flag == 0 && nums[i] % 2 == 0) {
                    count++;
                    flag = 1;
                } else if (flag == 1 && nums[i] % 2 != 0) {
                    count++;
                    flag = 0;
                } else if (flag == 1 && nums[i] % 2 == 0) {
                    flag = 0;
                    i--;
                    count = 0;
                } else if (nums[i] % 2 != 0) {
                    count = 0;
                    flag = 0;
                }
                max_count = max(max_count, count);
            } else {
                count = 0;
                flag = 0;
            }
        }
        return max_count;
    }
};