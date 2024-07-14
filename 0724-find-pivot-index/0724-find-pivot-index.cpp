class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int sum = 0;
        int total = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(sum == total) {
                return i;
            }
            total -= nums[i];
        }
        return -1;
        
    }
};