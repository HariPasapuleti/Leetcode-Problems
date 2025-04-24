class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {

        unordered_map<int, int> mp;
        int totalDistinct = unordered_set<int>(nums.begin(), nums.end()).size();
        int res = 0, left = 0;
        for (int right = 0; right < nums.size(); right++) {
            mp[nums[right]]++;
            while (left <= right && mp.size() == totalDistinct) {
                res += nums.size() - right;
                mp[nums[left]]--;
                if (mp[nums[left]] == 0)
                    mp.erase(nums[left]);
                left++;
            }
        }
        return res;
    }
};