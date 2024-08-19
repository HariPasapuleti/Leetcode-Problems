class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int element_sum = 0, digit_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            element_sum += nums[i];
            while (nums[i] > 9) {
                digit_sum += nums[i] % 10;
                nums[i] /= 10;
            }

            digit_sum += nums[i];
        }

        return abs(element_sum - digit_sum);
    }
};