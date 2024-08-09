class Solution {
public:
    int maxOperations(vector<int>& nums) {

        int operations = 0;
        int element_sum = nums[0] + nums[1];
        for(int i = 1; i < nums.size(); i += 2) 
        {
            if(nums[i-1] + nums[i] == element_sum) operations++;
            else return operations;
        }
        return operations;
        
    }
};