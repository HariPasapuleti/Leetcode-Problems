class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        unordered_map<int, int> hash_map;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                hash_map[bills[i]]++;
                // cout << "In change 5 - " << hash_map[bills[i]] << endl;
            } else if (bills[i] == 10) {
                cout << hash_map[5] << endl;
                if (hash_map[5] > 0) {
                    hash_map[5]--;
                    hash_map[bills[i]]++;
                    // cout << "In change 5 - " << hash_map[bills[i]] << endl;
                } else {
                    return false;
                }
            } else {
                if (hash_map[5] > 0 && hash_map[10] > 0) {
                    // cout << "Change 10 - " << hash_map[10] << endl;
                    hash_map[5]--;
                    hash_map[10]--;
                    hash_map[bills[i]]++;
                } else if (hash_map[5] > 2) {
                    hash_map[5] -= 3;
                    hash_map[bills[i]]++;
                } else {
                    return false;
                }
            }
            // cout << hash_map[20] << endl;
        }
        return true;
    }
};