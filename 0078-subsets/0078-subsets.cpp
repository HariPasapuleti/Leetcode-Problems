class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        vector<int> temp;
        func(n - 1, nums, temp, res);
        return res;
    }

    void func(int ind, vector<int> nums, vector<int> temp,
              vector<vector<int>>& res) {
        if (ind < 0) {
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        func(ind - 1, nums, temp, res);
        temp.pop_back();
        func(ind - 1, nums, temp, res);
    }
};