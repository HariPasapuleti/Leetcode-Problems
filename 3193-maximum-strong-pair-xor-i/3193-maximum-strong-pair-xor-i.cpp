class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {

        int temp_xor = 0, res = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (abs(nums[i] - nums[j]) <= min(nums[i], nums[j])) {
                    temp_xor = nums[i] ^ nums[j];
                    res = max(temp_xor, res);
                }
            }
        }
        return res;
    }
};