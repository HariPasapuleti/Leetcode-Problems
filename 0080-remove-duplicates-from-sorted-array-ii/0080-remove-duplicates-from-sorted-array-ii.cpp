class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int left = 2;
        if (nums.size() <= 2)
            return nums.size();
            
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[left - 2]) {
                nums[left++] = nums[i];
            }
        }

        return left;
    }
};