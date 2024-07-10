class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product_of_numbers = 1, product_of_numbers_not_zero = 1, zeroes_count = 0;
        vector<int> resultant;
        for(int i = 0; i < nums.size(); i++)
        {
            product_of_numbers *= nums[i];
            if(nums[i] == 0) zeroes_count++;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0) product_of_numbers_not_zero *= nums[i];
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if(zeroes_count > 1) {
                resultant.push_back(0);
            }
            else if(nums[i] != 0) {
                resultant.push_back(product_of_numbers / nums[i]);
            }
            else {
                resultant.push_back(product_of_numbers_not_zero);
            }
        }
        return resultant;
        
    }
};