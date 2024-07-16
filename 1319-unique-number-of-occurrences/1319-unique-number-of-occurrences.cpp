class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map <int, int> count_map;
        for(auto num : arr)
        {
            count_map[num]++;
        }

        set<int> occurences;

        for(auto element : count_map)
        {
            if(occurences.find(element.second) != occurences.end()) return false;
            occurences.insert(element.second);
        }
        return true;
    }
};