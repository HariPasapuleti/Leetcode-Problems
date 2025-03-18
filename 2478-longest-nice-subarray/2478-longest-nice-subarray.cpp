class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int maxLen = 1, windowStart = 0, usedBits = 0;
        for (int windowEnd = 0; windowEnd < nums.size(); windowEnd++) {
            while ((usedBits & nums[windowEnd]) != 0) {
                usedBits ^= nums[windowStart];
                windowStart++;
            }
            usedBits |= nums[windowEnd];
            maxLen = max(maxLen, windowEnd - windowStart + 1);
        }
        return maxLen;
    }
};