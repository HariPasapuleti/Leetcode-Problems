class Solution {
public:
    int minimumPushes(string word) {

        unordered_map<char, int> keys;
        for (auto letter : word) {
            keys[letter]++;
        }

        int count = 0, index = 0;
        for (auto key : keys) {
            index++;
            if (index > 24) {
                count += 4 * key.second;
            } else if (index > 16) {
                count += 3 * key.second;
            } else if (index > 8) {
                count += 2 * key.second;
            } else {
                count += key.second;
            }
            
        }
        return count;
    }
};