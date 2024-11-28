class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> mp{{'I', 1},   {'V', 5},   {'X', 10},
                                    {'L', 50},  {'C', 100}, {'D', 500},
                                    {'M', 1000}};

        int res = mp[s[0]];
        for (int i = 1; i < s.size(); i++) {
            if (mp[s[i - 1]] < mp[s[i]]) {
                res -= 2 * mp[s[i - 1]];
            }
            res += mp[s[i]];
        }
        return res;
    }
};