class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        vector<int> subarr_sums;
        int i = 0;
        while (i < n) {
            int arr_sum = 0;
            for (int j = i; j < n; j++) {
                arr_sum += nums[j];
                subarr_sums.push_back(arr_sum);
            }
            i++;
        }

        long long int sum_result = 0;
        sort(subarr_sums.begin(), subarr_sums.end());
        for (int i = left - 1; i < right; i++) {
            sum_result += subarr_sums[i];
        }
        // cout<<sum_result;
        return sum_result % (int)(1e9 + 7);
        // return 0;
    }
};