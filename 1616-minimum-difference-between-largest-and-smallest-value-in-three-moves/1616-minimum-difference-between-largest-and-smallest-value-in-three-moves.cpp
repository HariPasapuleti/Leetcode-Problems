class Solution {
public:
    int minDifference(vector<int>& nums) {

        if(nums.size() <= 4) return 0;
        sort(nums.begin(), nums.end());
        int min_diff = INT_MAX;
        for(int i = 0; i <= 3; i++)
        {
            min_diff = min(min_diff, nums[nums.size() - 4 + i] - nums[i]);
        }
        return min_diff;
        
        // sort(nums.begin(), nums.end());
        // int middle_index = nums.size() / 2;
        // int i = 0, j = nums.size() - 1, k = 0;
        // while(k < 3)
        // {
        //     if(nums[j] - nums[middle_index] <= nums[i] - nums[middle_index])
        //     {
        //         nums[i] = nums[middle_index];
        //         i++;
        //     }
        //     else if(nums[j] - nums[middle_index] > nums[i] - nums[middle_index])
        //     {
        //         nums[j] = nums[middle_index];
        //         j--;
        //     }
        //     k++;
        // }
        // sort(nums.begin(), nums.end());
        // return abs(nums[0] - nums[nums.size() - 1]);
    }
};