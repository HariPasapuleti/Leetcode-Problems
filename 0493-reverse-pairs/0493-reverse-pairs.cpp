class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count = 0;
        mergeSort(nums, 0, nums.size() - 1, count);
        return count;
    }

    void mergeSort(vector<int>& nums, int low, int high, int& count) {
        if (low >= high)
            return;
        int mid = (high + low) / 2;
        mergeSort(nums, low, mid, count);
        mergeSort(nums, mid + 1, high, count);
        merge(nums, low, mid, high, count);
    }

    void merge(vector<int>& nums, int low, int mid, int high, int& count) {
        int j = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (j <= high && nums[i] > 2 * (long long)nums[j])
                j++;
            count += j - (mid + 1);
        }

        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] < nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        int m = 0;
        for (int i = low; i <= high; i++) {
            nums[i] = temp[m++];
        }
    }
};