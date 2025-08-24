class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, res = 0, zero_count = 0;
        for (int right = 0; right < nums.size(); right++) {
            zero_count += (nums[right] == 0);
            while (zero_count > 1) {
                if (nums[left] == 0)
                    zero_count--;
                left++;
            }
            res = max(res, right - left);
        }
        return res;
    }
};