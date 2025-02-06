class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

        int res = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int product = nums[i] * nums[j];
                if (mp.find(product) != mp.end()) {
                    res += mp[product] * 8;
                }
                mp[product]++;
            }
        }
        return res;
    }
};