class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<int> element_count(nums.size() + 1, 0);
        int max_count = 0;
        for(int i : nums)
        {
            element_count[i] += 1;
            max_count = max(max_count, element_count[i]);
        }
        

        vector<vector<int>> result_arr;

        for(int i = 0; i < max_count; i++)
        {
            vector<int> v1;
            for(int j = 0; j < nums.size() + 1; j++)
            {
                if(element_count[j])
                {
                    v1.push_back(j);
                    element_count[j]--;
                }
            }
            result_arr.push_back(v1);
        }
        return result_arr;
    }
};