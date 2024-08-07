class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        if(k == 1 || nums.size() < k) return 0;

        sort(nums.begin(), nums.end());

        int min_element = numeric_limits<int>::max();
        int element = numeric_limits<int>::max();
        for(int i = 0; i< nums.size(); i++)
        {
            if(i+k-1 < nums.size()) element = nums[i+k-1] - nums[i];
            min_element = min(min_element, element);
        }
        return min_element;
        
    }
};