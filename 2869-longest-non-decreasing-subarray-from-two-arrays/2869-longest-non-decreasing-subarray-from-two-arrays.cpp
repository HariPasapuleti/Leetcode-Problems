class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        if (n == 1) return 1;

        // Initialize the maximum length of non-decreasing subarray
        int maxLength = 1;
        
        // DP arrays to store the longest non-decreasing length ending at each position
        vector<int> dp1(n, 1);
        vector<int> dp2(n, 1);

        for (int i = 1; i < n; ++i) {
            if (nums1[i] >= nums1[i - 1]) {
                dp1[i] = max(dp1[i], dp1[i - 1] + 1);
            }
            if (nums1[i] >= nums2[i - 1]) {
                dp1[i] = max(dp1[i], dp2[i - 1] + 1);
            }
            if (nums2[i] >= nums1[i - 1]) {
                dp2[i] = max(dp2[i], dp1[i - 1] + 1);
            }
            if (nums2[i] >= nums2[i - 1]) {
                dp2[i] = max(dp2[i], dp2[i - 1] + 1);
            }
            maxLength = max(maxLength, max(dp1[i], dp2[i]));
        }

        return maxLength;
    }
};
