class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 0;
        if (nums[0] > nums[1])
            return 0;
        else if (nums[n - 1] > nums[n - 2])
            return n - 1;
        int low = 1, high = nums.size() - 2;
        while (low <= high) {
            int mid = low - (low - high) / 2;
            if (nums[mid - 1] < nums[mid] && nums[mid + 1] < nums[mid])
                return mid;
            if (nums[mid - 1] > nums[mid])
                high = mid - 1;
            else if (nums[mid + 1] > nums[mid])
                low = mid + 1;
        }
        return -1;
    }
};