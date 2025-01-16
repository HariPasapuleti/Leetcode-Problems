class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int res = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        for (int i = 0; i < n1; i++) {
            if (n2 % 2)
                res ^= nums1[i];
        }
        for (int i = 0; i < n2; i++) {
            if (n1 % 2)
                res ^= nums2[i];
        }
        return res;
    }
};