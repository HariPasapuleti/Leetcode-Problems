class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int left = 0, n = nums.size(), first = 0;
        for (int right = 0; right < n; right++) {
            if (nums[right] == 1 && first == 1) {
                if (right - left - 1 < k)
                    return false;
                left = right;
            }
            if (nums[right] == 1) {
                left = right;
                first = 1;
            }
        }
        return true;
    }
};