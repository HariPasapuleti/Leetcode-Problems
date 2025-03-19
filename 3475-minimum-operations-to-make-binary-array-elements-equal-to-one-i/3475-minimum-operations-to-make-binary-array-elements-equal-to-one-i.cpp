class Solution {
public:
    int minOperations(vector<int>& nums) {

        int operation = 0, n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            if (nums[i] == 0) {
                operation++;
                flip(i, nums);
                flip(i + 1, nums);
                flip(i + 2, nums);
            }
        }
        if (nums[n - 2] == 0 || nums[n - 1] == 0)
            return -1;
        else
            return operation;
    }

    void flip(int ind, vector<int>& nums) { nums[ind] ^= 1; }
};