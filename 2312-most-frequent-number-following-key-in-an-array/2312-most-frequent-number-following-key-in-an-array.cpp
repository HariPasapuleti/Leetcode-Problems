class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {

        unordered_map<int, int> freq_map;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] == key) {
                freq_map[nums[i+1]]++;
            }
        }

        int max_count = 1, max_element;
        for(auto pair : freq_map)
        {
            if(pair.second >= max_count) {
                max_count = pair.second;
                max_element = pair.first;
            }
        }

        return max_element;
        
    }
};