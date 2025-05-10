class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long nums1_sum = 0, nums2_sum = 0, nums1_zeroes = 0,
                  nums2_zeroes = 0;
        for (int i = 0; i < nums1.size(); i++) {
            nums1_sum += nums1[i];
            if (nums1[i] == 0) {
                nums1_zeroes++;
                nums1_sum++;
            }
        }
        for (int i = 0; i < nums2.size(); i++) {
            nums2_sum += nums2[i];
            if (nums2[i] == 0) {
                nums2_zeroes++;
                nums2_sum++;
            }
        }
        cout << nums1_sum << " " << nums2_sum << endl;
        if ((nums1_zeroes == 0 && nums2_sum > nums1_sum) ||
            (nums2_zeroes == 0 && nums1_sum > nums2_sum))
            return -1;
        return max(nums1_sum, nums2_sum);
    }
};