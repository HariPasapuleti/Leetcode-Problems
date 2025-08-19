class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0, zero_count = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                zero_count++;
            } else {
                res += zero_count * (zero_count + 1) / 2;
                zero_count = 0;
            }
        }
        res += zero_count * (zero_count + 1) / 2;
        return res;
    }
};