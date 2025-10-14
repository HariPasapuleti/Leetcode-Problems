class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> vec(101, 0);
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            vec[nums[i]]++;
        }
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] % k == 0) {
                res += i * vec[i];
            }
        }
        return res;
    }
};