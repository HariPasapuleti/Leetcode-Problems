class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size(), i = 1;
        while (i < n && nums[i - 1] < nums[i])
            i++;
        int p = i - 1;
        while (i < n && nums[i - 1] > nums[i])
            i++;
        int q = i - 1;
        while (i < n && nums[i - 1] < nums[i])
            i++;
        return p != 0 && q != 0 && i == n && i != q + 1;
    }
};