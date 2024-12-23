class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return func(nums, k) - func(nums, k - 1);
    }

    int func(vector<int> nums, int k) {
        unordered_map<int, int> mp;
        int res = 0, j = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            while (mp.size() > k) {
                mp[nums[j]]--;
                if (mp[nums  [j]] == 0)
                    mp.erase(nums[j]);
                j++;
            }
            res += i - j + 1;
        }
        return res;
    }
};