class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int bitInd = 0; bitInd < 32; bitInd++) {
            int sum = 0;
            for (int num : nums) {
                sum += (num >> bitInd) & 1;
            }
            if (sum % 3 == 1)
                res |= 1 << bitInd;
        }
        return res;
    }
};