class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        unordered_map<int, string> hash_map;

        for(int i = 0; i < names.size(); i++)
        {
            hash_map[heights[i]] = names[i];
        } 

        sort(heights.begin(), heights.end(), greater<int>());
        vector<string> sorted;
        for(auto& height : heights)
        {
            sorted.push_back(hash_map[height]);
        }

        return sorted;
        
    }
};