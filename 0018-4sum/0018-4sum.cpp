class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        set<vector<int>> res;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                set<long long> hs;
                for (int k = j + 1; k < nums.size(); k++) {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long four = target - sum;
                    if (hs.find(four) != hs.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)four};
                        sort(temp.begin(), temp.end());
                        res.insert(temp);
                    }
                    hs.insert(nums[k]);
                }
            }
        }

        vector<vector<int>> vec(res.begin(), res.end());
        return vec;
    }
};