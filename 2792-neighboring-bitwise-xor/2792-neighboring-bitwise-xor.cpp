class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size(), res = 0;
        for (int i = 0; i < n; i++) {
            res ^= derived[i];
        }
        return true ? res == 0 : false;
    }
};