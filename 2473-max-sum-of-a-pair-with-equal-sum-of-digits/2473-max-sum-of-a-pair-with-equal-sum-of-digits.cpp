class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int res = -1;
        vector<int> sameDigit(82, -1);
        for (int i = 0; i < nums.size(); i++) {
            int sum = sumDigit(nums[i]);
            if (sameDigit[sum] != -1) {
                res = max(res, sameDigit[sum] + nums[i]);
                sameDigit[sum] = max(sameDigit[sum], nums[i]);
            } else {
                sameDigit[sum] = nums[i];
            }
        }
        return res;
    }

    int sumDigit(int number) {
        int sum = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }
};