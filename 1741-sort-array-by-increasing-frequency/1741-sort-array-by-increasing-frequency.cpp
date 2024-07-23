class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int> hash_map;
        for(int num : nums)
        {
            hash_map[num]++;
        }

        vector<pair<int, int>> freq_vector(hash_map.begin(), hash_map.end());
        sort(freq_vector.begin(), freq_vector.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            // "[](const pair<int, int>& a, const pair<int, int>& b" - Using lambda function.
            if (a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        vector<int> freq_sort;
        for(auto& element : freq_vector)
        {
            for(int j = 0; j < element.second; j++)
            {
                freq_sort.push_back(element.first);
            }
        }
        return freq_sort;

    }
};