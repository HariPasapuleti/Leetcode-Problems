class Solution {
public:
    bool check(vector<int>& nums) {

        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        int rotations = 0;

        if(nums == sorted_nums) return true;

        else
        {
            for(int i = 0; i < nums.size(); i++)
            {
                // printf("Running.");
                int current_element = nums[0];
                nums.erase(nums.begin());
                nums.push_back(current_element);
                // nums = nums;

                // cout << nums[nums.size() - 1] << endl;
                // for(int j=0;j<nums.size();j++)
                // {
                //     cout << nums[j];
                // }
                rotations += 1;
                if(nums == sorted_nums) return true;
            }
        }
        return false;
    }
};