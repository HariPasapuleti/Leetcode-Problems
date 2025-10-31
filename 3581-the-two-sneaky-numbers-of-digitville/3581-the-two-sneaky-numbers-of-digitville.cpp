class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> freq(nums.size(), 0), res;
        for (int num : nums) {
            freq[num]++;
            if (freq[num] == 2) {
                res.push_back(num);
            }
        }
        return res;
    }
};