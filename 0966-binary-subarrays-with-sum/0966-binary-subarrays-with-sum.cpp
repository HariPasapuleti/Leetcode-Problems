class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res = 0, j = 0, sum = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum == goal)
                res++;
            if (mp.find(sum - goal) != mp.end()) {
                res += mp[sum - goal];
            }
            mp[sum]++;
        }
        return res;
    }
};