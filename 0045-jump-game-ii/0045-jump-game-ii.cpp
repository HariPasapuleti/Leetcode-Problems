class Solution {
public:
    int jump(vector<int>& nums) {

        int jumps = 0, left = 0, right = 0;
        while (right < nums.size() - 1) {
            int max_ind = 0;
            for (int i = left; i <= right; i++) {
                max_ind = max(max_ind, i + nums[i]);
            }
            left = right + 1;
            right = max_ind;
            jumps++;
        }
        return jumps;
    }
};