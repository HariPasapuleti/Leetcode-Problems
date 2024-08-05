class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int> hash_map;
        for(auto& ch : arr)
        {
            hash_map[ch]++;
        }

        // vector<pair<string, int>> vec(hash_map.begin(), hash_map.end());
        // sort(vec.begin(), vec.end(), [](const auto& a, const auto& b){
        //     return a.second < b.second;
        // });

        int count=0;
        for(auto str: arr)
        {
            if(hash_map[str] == 1) {
                count++;
                if(count == k) {
                    return str;
                }
            }
        }
        return "";

    }
};