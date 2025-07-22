class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        vector<bool> vec(10001, false);
        int res = 0, curr_sum = 0, left = 0;
        bool fresh = true;
        for (int right = 0; right < nums.size(); right++) {
            while (vec[nums[right]]) {
                curr_sum -= nums[left];
                vec[nums[left]] = false;
                left++;
            }
            curr_sum += nums[right];
            vec[nums[right]] = true;
            res = max(res, curr_sum);
        }
        return res;
    }
};