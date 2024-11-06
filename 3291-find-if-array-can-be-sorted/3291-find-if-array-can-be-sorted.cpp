class Solution {
public:
    bool canSortArray(vector<int>& nums) {

        vector<int> bits;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i], bit_count = 0;
            bit_count=__builtin_popcount(nums[i]);
            // cout << bit_count << " ";
            bits.push_back(bit_count);
        }

        int i = 1, j = 0;
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        int flag = 0;
        // cout << endl;
        while (i < nums.size()) {
            if (bits[i] == bits[i - 1]) {
                if (flag == 0) {
                    j = i - 1;
                    flag = 1;
                }
                sort(nums.begin() + j, nums.begin() + i + 1);
            } else {
                flag = 0;
            }
            i++;
        }
        if (flag == 1)
            sort(nums.begin() + j, nums.begin() + i);
        return sorted_nums == nums;
    }
};