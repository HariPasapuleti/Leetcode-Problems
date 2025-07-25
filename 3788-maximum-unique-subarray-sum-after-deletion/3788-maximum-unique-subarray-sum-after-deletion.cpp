class Solution {
public:
    int maxSum(vector<int>& nums) {

        unordered_set<int> seen;
        int res = 0, max_element = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (seen.find(nums[i]) == seen.end() && nums[i] > 0) {
                seen.insert(nums[i]);
                res += nums[i];
            }
            max_element = max(max_element, nums[i]);
        }
        return res == 0 ? max_element : res;
    }
};