class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int res = 0, j = 0, sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] % 2 == 1);
            if (sum == k)
                res++;
            if (mp.find(sum - k) != mp.end()) {
                res += mp[sum - k];
            }
            mp[sum]++;
        }
        return res;
    }
};