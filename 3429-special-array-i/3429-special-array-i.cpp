class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool even;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                even = nums[0] % 2;
            }
            if (nums[i] % 2 == 0 && !even)
                even = true;
            else if (nums[i] % 2 != 0 && even)
                even = false;
            else
                return false;
        }
        return true;
    }
};