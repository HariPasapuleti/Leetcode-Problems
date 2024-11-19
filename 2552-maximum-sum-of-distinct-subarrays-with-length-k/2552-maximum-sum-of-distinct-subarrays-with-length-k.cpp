class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        long long res = 0, arr_sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            arr_sum += nums[i];
            mp[nums[i]]++;
            if (i >= k) {
                arr_sum -= nums[i - k];
                mp[nums[i - k]]--;
                if (mp[nums[i - k]] == 0) {
                    mp.erase(nums[i - k]);
                }
            }

            if (mp.size() == k) {
                res = max(res, arr_sum);
            }
        }
        return res;
    }
};