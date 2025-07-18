class Solution {
public:
    bool canJump(vector<int>& nums) {

        int max_ind = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i <= max_ind) {
                max_ind = max(max_ind, i + nums[i]);
            } else {
                return false;
            }
        }
        return true;
    }
};