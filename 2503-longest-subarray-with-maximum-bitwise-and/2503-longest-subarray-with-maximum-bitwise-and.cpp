class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int max_element = 0;
        for (int i = 0; i < nums.size(); i++) {
            max_element = max(max_element, nums[i]);
        }

        int count = 0, max_count = 1, flag = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max_element) {
                flag = 1;
            }

            if (flag == 1 && nums[i] == max_element) {
                count++;
                max_count = max(max_count, count);
            } else {
                flag = 0;
                count = 0;
            }
        }
        return max_count;
    }
};