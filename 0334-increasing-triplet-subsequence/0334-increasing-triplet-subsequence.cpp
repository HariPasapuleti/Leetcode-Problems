class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int first = INT_MAX, second = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] <= first) {
                first = nums[i];
            }
            else if(nums[i] <= second) {
                second = nums[i];
            }
            else return true;
        }
        
        // int i = 0, j = 1, k = 2;
        // while(i < nums.size() && j < nums.size() && k < nums.size())
        // {
        //     if(nums[i] < nums[j] && nums[j] < nums[k]) return true;
        
        //     if(k == nums.size() - 1) {
        //         k = j + 1;
        //         j++;
        //     }
        //     if(j >= nums.size() - 2) {
        //         j = i + 1;
        //         i++;
        //     }
        //     k++;
        // }
        return false;
    }
};