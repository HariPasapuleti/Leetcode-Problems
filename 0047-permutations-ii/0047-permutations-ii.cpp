class Solution {
public:
    void recur_permute(vector<int> nums, vector<int>& ds,
                       vector<vector<int>>& res, vector<int> freq) {

        if (ds.size() == nums.size()) {
            res.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (freq[i] || (i > 0 && nums[i] == nums[i - 1] && !freq[i - 1]))
                continue;
            freq[i] = 1;
            ds.push_back(nums[i]);
            recur_permute(nums, ds, res, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> freq(n, 0), ds;
        vector<vector<int>> res;
        recur_permute(nums, ds, res, freq);

        return res;
    }
};