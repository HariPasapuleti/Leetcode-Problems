class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        int res = 0, sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int diff = sum - k;

            if (sum == k) {
                res++;
                // continue;
            }

            if (mp.find(diff) != mp.end()) {
                res += mp[diff];
            }

            mp[sum]++;
        }

        return res;
    }
};