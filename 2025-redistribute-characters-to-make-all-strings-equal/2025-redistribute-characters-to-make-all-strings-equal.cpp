class Solution {
public:
    bool makeEqual(vector<string>& words) {

        if (words.size() <= 1)
            return true;

        unordered_map<char, int> hash_map;

        for (auto& word : words) {
            for (auto& ch : word) {
                hash_map[ch]++;
            }
        }

        int word_count = words.size();

        for (auto& pair : hash_map) {
            if (pair.second % word_count != 0 || pair.second <= 1)
                return false;
        }

        return true;
    }
};