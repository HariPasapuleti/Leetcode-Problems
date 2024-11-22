class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                if (nums[0] < nums[nums.size() - 1])
                    count++;
            } else if (nums[i - 1] > nums[i])
                count++;
        }
        if (count > 1)
            return false;
        return true;
    }
};