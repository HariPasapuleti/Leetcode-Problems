class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxInc = 1, maxDec = 1, inc = 0, dec = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] > nums[i]) inc++;
            else inc = 0;
            
            if (nums[i - 1] < nums[i]) dec++;
            else dec = 0;
            maxInc = max(maxInc, inc + 1);
            maxDec = max(maxDec, dec + 1);
        }
        return max(maxInc, maxDec);
    }
};