class Solution {
public:
    int maximumLength(vector<int>& nums) {

        int even = 0, odd = 0, alt = 1, prev = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
            if (i != 0 && prev % 2 != nums[i] % 2) {
                alt++;
            }

            prev = nums[i];
        }
        return max(alt, max(even, odd));
    }
};