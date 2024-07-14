class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int zeroes_count = 0, i = 0, j = 0, ones_count = 0;

        while(i < nums.size())
        {
            if(nums[i] == 0) {
                zeroes_count++;
            }
            if(zeroes_count > 1) {
                while(nums[j++] != 0);
                zeroes_count--;
            }
            ones_count = max(ones_count, i - j);
            i++;
        }
        return ones_count;
        
        // int i = 0, ones_count = 0, zeroes_count = 0, max_ones = 0;
        // while(i < nums.size())
        // {
        //     if(nums[i] == 1) {
        //         ones_count++;
        //     }
        //     else {
        //         if(zeroes_count < 1) {
        //             zeroes_count++;
        //         }
        //         else if(nums[i - ones_count - 1] == 0) {
        //             zeroes_count = 1;
        //         }
        //         else {
        //             ones_count = 0;
        //         }
                
        //     }
        //     cout << ones_count << endl;
        //     max_ones = max(max_ones, ones_count);
        //     i++;
        // }
        // if(max_ones == nums.size()) max_ones--;
        // return max_ones;
    }
};