class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(nums.begin(), nums.end()), res;
        sort(temp.begin(), temp.end());
        unordered_map<int, int> mp;
        for (int i = n - k; i < n; i++) {
            mp[temp[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                res.push_back(nums[i]);
                mp[nums[i]]--;
            }
            if (mp[nums[i]] == 0) {
                mp.erase(nums[i]);
            }
        }
        return res;
    }
};