class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> res{nums[0]};
        int i = 1;
        while (k > 1 && i < nums.size()) {
            if (nums[i - 1] != nums[i]) {
                res.push_back(nums[i]);
                k--;
            }
            i++;
        }
        return res;
    }
};